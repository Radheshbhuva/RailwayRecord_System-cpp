# 🚆 Railway Record System (C++)

A menu-driven Railway Record System built using C++, designed to manage basic train records through a console-based interface.
This project demonstrates object-oriented programming, modular design, and real-world data handling using arrays.

## 📌 Project Overview: 

**Railway Record System** allows users to efficiently manage train-related information through the following features:
⦁	Add new train records

⦁	View all available train records

⦁	Search for a specific train using its train number

⦁	Exit the system safely


To follow good software design practices, the project is divided into two separate source files:

Main File → Handles menu display and user interaction

Core Logic File → Implements classes and system functionality

This modular structure improves readability, maintainability, and scalability.


## 🧠 Core Concepts Demonstrated

This project highlights strong fundamentals in:

Object-Oriented Programming (Classes & Objects)

Constructors, Getters & Setters

Arrays of objects

Menu-driven programming using switch

Input/Output handling (cin, cout)

Control flow (while, if-else)

Modular file structure using multiple .cpp files


## 📁 Project Structure

```
Railway-Reservation-System/

├── main_railway.cpp              # Menu-driven main program

├── Railway_Record_System.cpp     # Core logic & class definitions

├── README.md                     # Project documentation

└── .gitignore
```


## 🏗️ System Design (As Implemented)

### 🔹 Class: Record

Stores individual train details:

Train Number

Train Name

Source

Destination

Train Time

Includes: Constructor,Getter and Setter methods

displayRecord() for formatted output


### 🔹 Class: RailwayRecordSystem

Manages the overall system using:

Record records[10] → Fixed-size array

size → Tracks the number of stored records

Implemented Functions:

addTrainRecord()

displayAllRecords()

searchTrainByNumber()

exitSystem()


## ✨ Features:

✅ Menu-driven console interface

✅ Add up to 10 train records

✅ Display all stored train records

✅ Search trains using train number

✅ Clean and formatted output

✅ Modular and readable code

✅ Beginner-friendly implementation

## 🖥️ Program Menu (Sample Output)
```
<< RAILWAY RESERVATION SYSTEM >>
1.	Add Train Record
2.	Display All Records
3.	Search Train by Number
4.	Exit
Enter your choice:
```

**1. Add Train Record** -- Takes the information about the train and store it into a sequential form
**2. Display All Records** -- Shows all records which has been added.
**3. Search Train by Number** -- Searches the record of the train by using the train number and display the record of it.
**4. Exit** -- Closes the application.

### Example Session

```
                                                           << RAILWAY Record SYSTEM >>

1. Add Train Record

2. Display All Records

3. Search Train by Number

4. Exit

Enter your choice: 1


<-> <-> <-> ENTER THE DETAILS OF TRAIN TO ADD INTO A RECORD <-> <-> <->

Enter Train Number: 14514
Enter Train Name: Suryanagri
Enter Train Source: Surat
Enter Destination: Mumbai
Enter Train Time: 4




                                                           << RAILWAY Record SYSTEM >>

1. Add Train Record

2. Display All Records

3. Search Train by Number

4. Exit

Enter your choice: 2


<< Displaying Train Records >>
                                         <<< DISPLAYING TRAIN RECORDS OF 14514 >>>
                                                  ->TRAIN NUMBER: 14514
                                                  ->TRAIN NAME: Suryanagri
                                                  ->SOURCE OF TRAINN: Surat
                                                  ->DESTINATION: Mumbai
                                                  ->TRAIN TIME: 4



                                                           << RAILWAY Record SYSTEM >>

1. Add Train Record

2. Display All Records

3. Search Train by Number

4. Exit

Enter your choice: 3


Enter Train Number: 14514
                                              << Searching Train Details >>

                                         <<< DISPLAYING TRAIN RECORDS OF 14514 >>>
                                                  ->TRAIN NUMBER: 14514
                                                  ->TRAIN NAME: Suryanagri
                                                  ->SOURCE OF TRAINN: Surat
                                                  ->DESTINATION: Mumbai
                                                  ->TRAIN TIME: 4



                                                           << RAILWAY Record SYSTEM >>

1. Add Train Record

2. Display All Records

3. Search Train by Number

4. Exit

Enter your choice: 4


Exiting the System. Bye
```

## 🚀 How to Compile & Run

🔧 Prerequisites

Any C++ compiler (GCC / MinGW / Dev-C++ / Turbo C++)

VS Code or any C++ IDE

## ▶️ Compilation (Using GCC)

g++ main_railway.cpp -o railway

./railway

Ensure both .cpp files are in the same directory.


## 📚 Learning Outcomes

By completing this project, you gain experience in:

Designing real-world console applications

Applying OOP concepts in C++

Structuring multi-file C++ projects

Implementing menu-driven systems

Managing data using arrays of objects


## 🛠️ Limitations

Fixed record limit (maximum 10 trains)

No data persistence (no file handling)

No passenger or seat booking functionality

Console-based interface only


## 🔮 Future Enhancements

Planned improvements include:

File handling for permanent data storage

Dynamic data structures (vector)

Seat availability and booking system

Date & time-based scheduling

Admin and user roles

GUI or Web-based version

## 👨‍💻 Author

Created by: [Radhesh Bhuva](https://github.com/Radheshbhuva)

## 🤝 Contributing

Contributions are welcome and appreciated!

If you’d like to improve this project, follow the above steps to get started


