//==============================================
// Name:           Gio Lucero
// Student Number: 152669198
// Email:          glucero@myseneca.ca
// Section:        NJJ
// Date:           
//==============================================
// Assignment:     2
// Milestone:      4
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+
// getName:
void getName(struct Name *name) {
	int check = 0;
	char j;
	printf("Please enter the contact's first name: ");
	scanf(" %30[^\n]", name->firstName);

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %6[^\n]%c", name->middleInitial, &j);
		if (j != '\n') {
			clearKeyboard();
		}
	}
	else {
		*name->middleInitial = '\0' ;
	}
	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name->lastName);
}


// getAddress:
void getAddress(struct Address *address) {
	int check = 0;
	char j;
	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();
	while (address->streetNumber <= 0) {
		//printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		printf("Please enter the contact's street number: ");
		address->streetNumber = getInt();

	}

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address->street);

	printf("Do you want to enter an apartment number? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
		while (address->apartmentNumber <= 0) {
			//printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			printf("Please enter the contact's apartment number: ");
			address->apartmentNumber = getInt();

		}

	}
	else {
		address->apartmentNumber = '\0';
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]%c", address->postalCode, &j);
	if (j != '\n') {
		clearKeyboard();
	}
	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", address->city);

}


// getNumbers:
// HINT:  Update this function to use the new helper 
//        function "getTenDigitPhone" where applicable
void getNumbers(struct Numbers *numbers) {
	int check = 0;
	//printf("Do you want to enter a cell phone number? (y or n): ");
	//check = yes();

	printf("Please enter the contact's cell phone number: ");
	//scanf(" %10[^\n]s", (*numbers).cell);
	getTenDigitPhone(numbers->cell);

	printf("Do you want to enter a home phone number? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's home phone number: ");
		//scanf(" %10[^\n]s", (*numbers).home);
		getTenDigitPhone(numbers->home);

	}
	else {
		*numbers->home = '\0';
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	check = yes();

	if (check == 1) {
		printf("Please enter the contact's business phone number: ");
		//scanf(" %10[^\n]s", (*numbers).business);
		getTenDigitPhone(numbers->business);

	}
	else {
		*numbers->business = '\0';
	}
}



// getContact
void getContact(struct Contact *contact) {
	getName(&(*contact).name);
	getAddress(&(*contact).address);
	getNumbers(&(*contact).numbers);
}