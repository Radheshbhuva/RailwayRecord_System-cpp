#include <iostream>
#include "Railway_Record_System.cpp"
using namespace std;

int main()
{
    RailwayRecordSystem system;

    while (true)
    {
        cout << endl
             << endl
             << "                                                           << RAILWAY Record SYSTEM >>" << endl
             << endl;
        cout << "1. Add Train Record" << endl
             << endl;
        cout << "2. Display All Records" << endl
             << endl;
        cout << "3. Search Train by Number" << endl
             << endl;
        cout << "4. Exit" << endl
             << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;

        cout << endl
             << endl;

        switch (choice)
        {
        case 1:
            system.addTrainRecord();
            break;
        case 2:
            system.displayAllRecords();
            break;
        case 3:
            system.searchTrainByNumber();
            break;
        case 4:
            system.exitSystem();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}