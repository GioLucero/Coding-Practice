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

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:
#include <string.h>

// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:
#include "contactHelpers.h"
#include "contacts.h"

// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):

#define MAXCONTACTS 5

//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause:
void pause(void) {
	printf("\n");
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:
int getInt(void) {
	int value = 0;
	char junk;
	scanf("%d%c", &value, &junk);
	while (junk != '\n') {
		clearKeyboard();
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &junk);
	}
	return value;
}

// getIntInRange:
int getIntInRange(int low, int high) {
	int value = 0;
	value = getInt();

	while (value < low || value > high) {
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", low, high);
		value = getInt();
	}
	return value;
}

// yes:
int yes(void) {
	char yn;
	char j;
	scanf(" %c%c", &yn, &j);
	while (!(yn == 'y' || yn == 'Y' || yn == 'N' || yn == 'n') || j != '\n') {
		if (j != '\n') {
			clearKeyboard();
		}
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
		scanf(" %c%c", &yn, &j);
	}
	if (yn == 'y' || yn == 'Y') {
		return 1;
	}
	return 0;
}

// menu:
int menu(void) {
	int value = 0;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	printf("\nSelect an option:> ");
	value = getIntInRange(0, 6);
	printf("\n");
	return value;
}

// contactManagerSystem:
void contactManagerSystem(void) {
	int choice = 1;
	int exit = 0;
	struct Contact contacts[MAXCONTACTS] = { //create an array of structs, an array of Contact structures called contactList
		{ { "Rick", { '\0' }, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" } },
	{
		{ "Maggie", "R.", "Greene" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9051112222", "9052223333", "9053334444" } },
	{
		{ "Morgan", "A.", "Jones" },
	{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
	{ "7051112222", "7052223333", "7053334444" } },
	{
		{ "Sasha", { '\0' }, "Williams" },
	{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
	{ "9052223333", "9052223333", "9054445555" } },
	};
	while (exit != 1) {
		choice = menu();
		switch (choice) {
		case 0:
			printf("Exit the program? (Y)es/(N)o: ");
			exit = yes();
			printf("\n");
			break;
		case 1:
			displayContacts(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 2:
			addContact(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 3:
			updateContact(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 4:
			deleteContact(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 5:
			searchContacts(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		case 6:
			sortContacts(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;
		}
	}
	printf("Contact Management System: terminated\n");

}

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10-digit chars entered)
// ---------------------------------------------------------------------------------
// NOTE: Modify this function to validate only numeric character digits are entered
// ---------------------------------------------------------------------------------
void getTenDigitPhone(char telNum[])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10 && strspn(telNum, "0123456789") == strlen(telNum))
			needInput = 0;

		else
			printf("Enter a 10-digit phone number: ");

	}
}

// findContactIndex:
int findContactIndex(const struct Contact contact[], int size, const char cellNum[])
{
	int value = 0;
	int i = 0;
	for (i = 0; i < size; i++) {
		if (strcmp(cellNum, contact[i].numbers.cell) == 0) {
			value = i;
				return value;
		}
	}
		
	return -1;
}


// displayContactHeader
// Put empty function definition below:
void displayContactHeader() {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");

}


// displayContactFooter
// Put empty function definition below:
void displayContactFooter(int totalContacts) {
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n", totalContacts);

}


// displayContact:
// Put empty function definition below:
void displayContact(const struct Contact* contact) {
	if (strlen(contact->name.middleInitial) > 0) {
		printf(" %s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
		printf("    C: %10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);

		if (contact->address.apartmentNumber > 0) {
			printf("       %d %s, Apt# %d, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.apartmentNumber, contact->address.city, contact->address.postalCode);

		}
		else {
			printf("       %d %s, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.city, contact->address.postalCode);
		}
	}
	else {
		printf(" %s %s\n", contact->name.firstName, contact->name.lastName);
		printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);

		if (contact->address.apartmentNumber > 0) {
			printf("       %d %s, Apt# %d, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.apartmentNumber, contact->address.city, contact->address.postalCode);

		}
		else {
			printf("       %d %s, %s, %s\n", contact->address.streetNumber, contact->address.street, contact->address.city, contact->address.postalCode);
		}
	}
}


// displayContacts:
// Put empty function definition below:
void displayContacts(const struct Contact contacts[], int size) {
	int i = 0;
	int totalContacts = 0;
	displayContactHeader();
	for (i = 0; i < size; i++) {
		if (strlen(contacts[i].numbers.cell) > 0) {
			displayContact(&contacts[i]);
			totalContacts++;
		}
	}
	displayContactFooter(totalContacts);
}



// searchContacts:
// Put empty function definition below:
void searchContacts(const struct Contact contacts[], int temp) {
	int i = -1;
	char num[11];
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(num);
	i = findContactIndex(contacts, MAXCONTACTS, num);
	
	if (i > 0) {
		printf("\n");
		displayContact(&contacts[i]);
		
	}
	else {
		printf("*** Contact NOT FOUND ***\n");

	}
}


// addContact:
// Put empty function definition below:
void addContact(struct Contact contacts[], int size) {
	int i = 0;
	int empty = -5;

	for (i = 0; i < size; i++) {
		if (strlen(contacts[i].numbers.cell) == 0) {
			empty = i;
		}
	}
	if (empty == -5) {
		printf("*** ERROR: The contact list is full! ***\n");
	}
	else {
		getContact(&contacts[empty]);
		printf("--- New contact added! ---\n");
	}
}


// updateContact:
// Put empty function definition below:
void updateContact(struct Contact contacts[], int size) {
	int i = -1;
	char num[11];
	int check = 0;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(num);
	i = findContactIndex(contacts, size, num);
	if (i == -1) {
		printf("*** Contact NOT FOUND ***\n");
	}
	else {
		printf("\nContact found:\n");
		displayContact(&contacts[i]);
		printf("\n");
		printf("Do you want to update the name? (y or n): ");
		check = yes();
		if (check == 1) {
			getName(&contacts[i].name);
		}
		printf("Do you want to update the address? (y or n): ");
		check = yes();
		if (check == 1) {
			getAddress(&contacts[i].address);
		}
		printf("Do you want to update the numbers? (y or n): ");
		check = yes();
		if (check == 1) {
			getNumbers(&contacts[i].numbers);
		}
		printf("--- Contact Updated! ---\n");
	}
	
}


// deleteContact:
// Put empty function definition below:
void deleteContact(struct Contact contacts[], int size) {
	int i = -5;
	char num[11];
	int check = 0;
	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(num);
	i = findContactIndex(contacts, size, num);
	if (i == -5) {
		printf("*** Contact NOT FOUND ***\n");
	}
	else {
		printf("\nContact found:\n");
		displayContact(&contacts[i]);
		printf("\n");
		printf("CONFIRM: Delete this contact? (y or n): ");
		check = yes();
		if (check == 1) {
			*contacts[i].numbers.cell = '\0';
			printf("--- Contact deleted! ---\n");
		}
	}
}



// sortContacts:
// Put empty function definition below:
void sortContacts(struct Contact contacts[], int size) {
	int i = 0;
	int t = 0;
	struct Contact hold;

	for (t = 0; t < size; t++) {
		for (i = 0; i < size; i++) {
			if (strcmp(contacts[i].numbers.cell, contacts[t].numbers.cell) > 0) {
				if (strlen(contacts[i].numbers.cell) > 0 && strlen(contacts[t].numbers.cell) > 0) {
					hold = contacts[i];
					contacts[i] = contacts[t];
					contacts[t] = hold;
				}
			}
		}
	}
	printf("--- Contacts sorted! ---\n");
}