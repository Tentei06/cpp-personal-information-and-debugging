/*
 * CSC450_CT1_Person.cpp
 *
 *  Created on: Aug 23, 2026
 *      Author: Cody G. Walker
 *
 *
 * Pseudocode:
 *
 * START
 *
 *     DECLARE firstName as string
 *     DECLARE lastName as string
 *     DECLARE streetAddress as string
 *     DECLARE city as string
 *     DECLARE zipCode as integer
 *
 *     SET firstName to "Kai"
 *     SET lastName to "Veyr"
 *     SET streetAddress to "1247 Veyr Manor"
 *     SET city to "Zaryndor"
 *     SET zipCode to 80521
 *
 *     DISPLAY firstName
 *     DISPLAY lastName
 *     DISPLAY streetAddress
 *     DISPLAY city
 *     DISPLAY zipCode
 *
 * END
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Store the fictional person's information
	string firstName = "Kai";
	string lastName = "Veyr";
	string streetAddress = "1247 Veyr Manor";
	string city = "Zaryndor";
	int zipCode = 80521;

		// Display the person's information to the console
		cout << "First Name: " << firstName << endl;
		cout << "Last Name: " << lastName << endl;
		cout << "Street Address: " << streetAddress << endl;
		cout << "City: " << city << endl;
		cout << "Zip Code: " << zipCode << endl;

	// End the program successfully
	return 0;
}


