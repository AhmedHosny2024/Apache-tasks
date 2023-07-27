import psycopg2
import psycopg2.extras

import json
from decimal import Decimal

hostname = 'localhost'
database = 'apache'
username = 'postgres'
pwd = '123456'
port_id = 5432
conn = None

data = {
        "status_code": 200,
        "data": []
        }

class DecimalEncoder(json.JSONEncoder):
    def default(self, obj):
        if isinstance(obj, Decimal):
            return int(obj)
        return super().default(obj)
try:
    with psycopg2.connect(
                host = hostname,
                dbname = database,
                user = username,
                password = pwd,
                port = port_id) as conn:

        with conn.cursor(cursor_factory=psycopg2.extras.DictCursor) as cur:

            cur.execute('DROP TABLE IF EXISTS public.user_table')

            create_script = """ CREATE TABLE IF NOT EXISTS public.user_table (
                                user_id numeric(10,0) NOT NULL,
                                name character varying(50) COLLATE pg_catalog."default" NOT NULL,
                                age numeric(3,0) NOT NULL,
                                phone character varying(20) COLLATE pg_catalog."default",
                                CONSTRAINT user_table_pkey PRIMARY KEY (user_id)
                            );
                            """



            cur.execute(create_script)

            queries = [
                        "INSERT INTO public.user_table (user_id, name, age, phone) VALUES (3, 'Jenny', 34, NULL);",
                        "INSERT INTO public.user_table (user_id, name, age, phone) VALUES (2, 'Tom', 29, '1 800 123 1234');",
                        "INSERT INTO public.user_table (user_id, name, age, phone) VALUES (1, 'John', 28, NULL);"
                    ]

            # Execute each query
            for query in queries:
                cur.execute(query)
                conn.commit()

            
            cur.execute('SELECT * FROM public.user_table')
            rows =cur.fetchall()
            for row in rows:
                column_names = [desc[0] for desc in cur.description]
                user_data = {}
                for i, column in enumerate(column_names):
                    if(row[i]):
                        user_data[column] = row[i]
                   
                data["data"].append(user_data)

            json_data = json.dumps(data, indent=2,cls=DecimalEncoder)

            print(json_data)
except Exception as error:
    print(error)
    data["status_code"] = 400
    data["data"]=error
    
finally:
    if conn is not None:
        conn.close()