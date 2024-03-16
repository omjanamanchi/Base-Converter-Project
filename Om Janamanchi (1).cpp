// C++ Test on Laptop 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <algorithm>
#include <cmath>
#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include "functions.h";
using namespace std;

string decimalToBinary(int input);
string hexadecimalToBinary(string input);

int main()
{
	string option = "";
	cout << "Welcome to Bit-Exchange! The world's latest Base Converter!\n\n";

	do
	{
		cout << "MENU: Option '1' for decimal to binary || Option '2' for hexadecimal to binary\t Option: ";
		cin >> option;
		int input1;
		string input2;
		if (option == "1")
		{
			cout << "Enter a number (Base 10): ";
			cin >> input1;
			cout << "SOLUTION: decimalToBinary(" << input1 << ") = " << decimalToBinary(input1) << "\n\n";
		}
		else if (option == "2")
		{
			cout << "Enter a number (Base 16): ";
			cin >> input2;
			cout << "SOLUTION: hexadecimalToBinary(" << input2 << ") = " << hexadecimalToBinary(input2) << "\n\n";
		}
		else if (option == "Q")
		{
			break;
		}
		else
		{
			cout << "ERROR!\n\n";
		}

	} while (option != "Q");
	cout << "\n\n------ PROGRAM QUIT ------\nThank You for Using Bit-Exchange! Have a great day!\n\n";
}