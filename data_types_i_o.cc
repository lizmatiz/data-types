/*

Name: Elizabeth Hooton
Purpose of Program: ***
Date: 09.13.2022

*/

# include <iostream> // library that helps with input and output
# include <string> // library that helps with strings

using namespace std;

int main () {

// declares variables
int first_int;
int second_int;
int third_int;
double first_double;
char first_char;
bool first_bool;
string first_string;

//prints out uninitialized variables
cout << endl << "First uninitialized integer: " << first_int << endl << endl;
cout << "Second uninitialized integer: " << second_int << endl << endl;
cout << "Third uninitialized integer: " << third_int << endl << endl;
cout << "Uninitialized double: " << first_double << endl << endl;
cout << "Uninitialized char: " << first_char << endl << endl;
cout << "Uninitialized bool: " << first_bool << endl << endl;
cout << "Uninitialized string: " << first_string << endl << endl;


//asks user for inputs and assigns them to variables
cout << endl << "Enter a value for the first integer: ";
cin >> first_int;
cout << endl << "Enter a value for the second integer: ";
cin >> second_int;
cout << endl << "Enter a value for the third integer: ";
cin >> third_int;
cout << endl << "Enter a value for the double: ";
cin >> first_double;
cout << endl << "Enter a value for the character: ";
cin >> first_char;
cout << endl << "Enter a value for the bool: ";
cin >> first_bool;
cout << endl << "Enter a value for the string: ";
cin >> first_string;

//prints out the assigned value of each variable
cout << endl << endl << "This is the first integer: " << first_int << endl;
cout << endl << "This is the second integer: " << second_int << endl;
cout << endl << "This is the third integer: " << third_int << endl;
cout << endl << "This is the double: " << first_double << endl;
cout << endl << "This is the character: " << first_char << endl;
cout << endl << "This is the bool: " << first_bool << endl;
cout << endl << "This is the string: " << first_string << endl;



    return 0;
}