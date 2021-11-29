/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Nikolai Coletta
 */

#include "std_lib_facilities.h"

int main() {
    int input;
    //loop iterates until input of -1 is received
    while(true)
    {
        cout << "Please type a positive integer (type -1 to exit):";
        cin >> input;
        if (input == -1)
            break;
        else if (input > 0 && input % 2 == 0)
            cout << "The number " << input << " is an even number." << endl;
        else if (input > 0)
            cout << "The number " << input << " is a odd number." << endl;
        else
            cout << "Invalid input!" << endl;
    }
    cout << "Goodbye." << endl;

    return 0;
}
