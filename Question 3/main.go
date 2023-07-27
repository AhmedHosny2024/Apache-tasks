package main

import (
	"database/sql"
	"encoding/json"
	"fmt"
	"log"

	_ "github.com/lib/pq"
)

// Define a struct to hold the data retrieved from the table
type User struct {
	UserID int    `json:"user_id"`
	Name   string `json:"name"`
	Age    int    `json:"age"`
	Phone  string `json:"phone,omitempty"`
}
type Response struct {
	StatusCode int    `json:"status_code"`
	Data       []User `json:"data"`
}

func main() {
	// Replace the connection string with your PostgreSQL database details
	dbHost := "localhost"
	dbPort := 5432
	dbUser := "postgres"
	dbPassword := "123456"
	dbName := "apache"
	// Create a connection string
	connStr := fmt.Sprintf("host=%s port=%d user=%s password=%s dbname=%s sslmode=disable", dbHost, dbPort, dbUser, dbPassword, dbName)
	db, err := sql.Open("postgres", connStr)

	if err != nil {
		log.Fatal(err)
	}
	defer db.Close()

	// Make sure the connection is successful
	err = db.Ping()
	if err != nil {
		log.Fatal(err)
	}

	// Query the data from the table
	rows, err := db.Query("SELECT * FROM public.user_table")
	if err != nil {
		log.Fatal(err)
	}
	defer rows.Close()

	// Create a slice to store the results
	var users []User

	// Iterate through the rows and store the data in the slice
	for rows.Next() {
		var user User
		var phone sql.NullString // Use sql.NullString to handle nullable columns
		var Name sql.NullString  // Use sql.NullString to handle nullable columns
		var Age sql.NullInt64    // to handle nullable columns

		// Scan the data from the row into variables
		err := rows.Scan(&user.UserID, &user.Name, &user.Age, &phone)
		if err != nil {
			log.Fatal(err)
		}

		// Check if phone is valid (not null) and set it in the User struct
		if phone.Valid {
			user.Phone = phone.String
		}
		if Name.Valid {
			user.Name = Name.String
		}
		if Age.Valid {
			user.Age = int(Age.Int64)
		}

		// Append the user to the slice
		users = append(users, user)
	}
	response := Response{
		StatusCode: 200,
		Data:       users,
	}
	// Convert validData to JSON.
	jsonData, err := json.Marshal(response)
	if err != nil {
		log.Fatal(err)
	}

	// Print the JSON data
	fmt.Println(string(jsonData))
}
