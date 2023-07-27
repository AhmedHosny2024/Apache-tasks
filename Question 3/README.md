# Apache task 3
# README

This README file explains the development environment and provides instructions on how to compile and run the provided Python and go code. The code connects to a PostgreSQL database, creates a table, inserts data, fetches the data, and converts it to JSON format.
### Python
## Development Environment 

To run the Python code, you need the following development environment:

1. Python: The code is written in Python, so you need a compatible Python interpreter installed on your system.

2. PostgreSQL Database: Make sure you have a PostgreSQL database server running on your local machine or on a remote server. You'll need the following details to connect to the database:
   - Hostname
   - Database name
   - Username
   - Password
   - Port

3. psycopg2 Library: The code uses the `psycopg2` library to interact with the PostgreSQL database. Ensure that you have installed it before running the code. If you haven't installed it, you can install it using `pip`:

   ```bash
   pip install psycopg2
   ```

## Execution

Follow the steps below to run the Python code:


1. Make sure your PostgreSQL database server is up and running, and you have the necessary access credentials (hostname, database, username, password, and port).

2. Open a terminal or command prompt on your system.

3. Navigate to the directory where the Python code file is located using the `cd` command. For example, if the code is saved on your desktop:

   ```bash
   cd ~/Desktop
   ```

4. Run the Python script using the Python interpreter:

   ```bash
   python pythonFile.py
   ```

5. The script will execute various PostgreSQL commands, including creating a table, inserting data, fetching data, and converting it to JSON format.

6. The JSON-formatted data will be printed on the terminal, showing the data retrieved from the PostgreSQL database.

### Golang

## Development Environment

To run the Go code, you need the following development environment:

1. Go (Golang): The code is written in Go, so you need to have Go installed on your system. Make sure you have set up the Go workspace properly.

2. PostgreSQL Database: Make sure you have a PostgreSQL database server running on your local machine or on a remote server. You'll need the following details to connect to the database:
   - Hostname
   - Database name
   - Username
   - Password
   - Port

3. PostgreSQL Driver: The code uses the `pq` package as the PostgreSQL driver to interact with the database. Ensure that you have imported the package properly. If you haven't installed it, you can install it using `go get`:

   ```bash
   go get github.com/lib/pq
   ```

## Execution

Follow the steps below to run the Go code:


1. Make sure your PostgreSQL database server is up and running, and you have the necessary access credentials (hostname, database, username, password, and port).

2. Open a terminal or command prompt on your system.

3. Navigate to the directory where the Go code file is located.

4. Run the Go code using the `go run` command:

   ```bash
   go run main.go
   ```

5. The code will connect to the PostgreSQL database, query data from the "public.user_table" table, and convert the results to JSON format.

6. The JSON-formatted data will be printed on the terminal, showing the data retrieved from the PostgreSQL database.


## Important Note

Please ensure that you have provided the correct connection details to your PostgreSQL database in the Python code. If any of the connection details are incorrect, the script may fail to connect to the database and display an error message.

Now you have successfully executed the provided Python code to interact with a PostgreSQL database, create a table, insert data, fetch data, and convert it to JSON format. Feel free to explore the code and modify it to interact with your own PostgreSQL database or adapt it for other database systems. Happy coding!
 
