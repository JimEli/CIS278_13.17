/*************************************************************************
* Title: Printing a Table of ASCII Values
* File: CIS278_Week5_13.17.cpp
* Author: James Eli
* Date: 2/2/2018
*
* Exercise 13.17 on page 613 Printing a Table of ASCII Values.
* Write a program that uses a for statement to print a table of ASCII 
* values for the characters in the ASCII character set from 33 to 126. 
* The program should print the decimal value, octal value, hexadecimal 
* value and character value for each character. Use the stream 
* manipulators dec, oct and hex to print the integer values.

* Notes:
*  (1) Compiled with MS Visual Studio 2017 Community (v141).
*
* Submitted in partial fulfillment of the requirements of PCC CIS-278.
*************************************************************************
* Change Log:
*   02/02/2018: Initial release. JME
*************************************************************************/
#include <iostream> // cin/cout/endl
#include <iomanip>  // io manipulators

using namespace std;

int main()
{
	// Display header info.
	cout << "\t\t\tASCII Table (33-126)\n";
	for (int i = 0; i < 4; i++)
		cout << " DEC OCT HEX CHR ";
	cout << endl;

	// Display characterss 33-126 as dec, oct, hex and char. 
	for (int c = 33; c < 127; c++)
	{
		cout << " " << setfill(' ') << setw(3) << left << dec << c;  // Decimal number.
		cout << " " << setfill('0') << setw(3) << right << oct << c; // Octal.
		cout << " 0x" << hex << c;                                   // Hexidecimal.
		cout << " " << char(c);                                      // Character.
		cout << ((!(c % 4)) ? "\n" : "  ");                          // Return after 4x.
	}

	cout << "\n\n";
	return 0;
}
