// sample1.cpp

// reads and writes a first name

#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your first name (followed by <ENTER>):\n"; // \n is carriage return & line feed
    string first_name;  // first_name is currently an empty variable of type string

    cin >> first_name;  // reads characters from the command line into first_name

    cout << "Hello, " << first_name << "!\n";  // outputs message to the screen

    return 0;
}
