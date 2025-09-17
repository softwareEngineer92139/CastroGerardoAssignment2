/* ---------------------------------------------------------------------------
** I attest that this following code represents my own work and is subject to
** the plagiarism policy found in the course syllabus.
**
** Class: 	CSC 242
** Assignment: 	Lesson #2
** File: 	source.cpp
** Description: This project is about prompting the user to enter a positive
** integer and returning its binary digits.
**
** Author: 	Gerardo Castro
** Date: 	08/15/2025
** -------------------------------------------------------------------------*/


#include <iostream>
#include <string>

using namespace std;

int main() {

	int number;
	int binaryDigit;

	string outputBinary;

	// Prompt the user to enter a number
	cout << "Enter a positive integer: ";
	cin >> number;

	do 
	{
		// Updating counter for while loop and calculating the binary digit
		binaryDigit = number % 2;
		number = number / 2;

		// convert the binary digit to a string
		outputBinary = to_string(binaryDigit) + outputBinary;

	} while(number != 0);

	// Output the binary digits
	cout << outputBinary << endl;
	
	// Output the end of program message
	cout << "\n\nEnd of program" << endl;

	return 0;
}