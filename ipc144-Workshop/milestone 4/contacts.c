  //==============================================
// Name:           Gio Lucero
// Student Number: 152669198
// Email:          glucero@myseneca.ca
// Section:        NJJ
//==============================================

// Assignment:     1
// Milestone:      

//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"

char option;


// Numbers Function

void getName(struct Name *name)
{
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]", name->firstName); 
	//while (getchar() != '\n')
	do
	{
		printf("Do you want to enter a middle initial(s)? (y or n): ");
		scanf("%c", &option); 
	} while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", name->middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%35[^\n]", name->lastName);
}



// Address Function
void getAddress(struct Address *address)
{
	do
	{
		printf("Please enter the contact's street number: ");
		scanf("%d", &address->streetNumber);
	} while (address->streetNumber <= 0);
	printf("Please enter the contact's street name: ");
	scanf("%40[^\n]", address->street);
	do
	{
		printf("Do you want to enter an apartment number? (y or n): ");
		scanf("%c", &option);
	} while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');
	if (option == 'y' || option == 'Y')
	{
		do
		{
			printf("Please enter the contact's apartment number: ");
			scanf("%d", &address->apartmentNumber);
		} while (address->apartmentNumber <= 0);
	}
	printf("Please enter the contact's postal code: ");
	scanf("%7[^\n]", address->postalCode);
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]", address->city);
}
// Numbers Function
void getNumber(struct Numbers *numbers)
{
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf("%c", &option);
	while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');
	if (option == 'y' || option == 'Y') {
		printf("Please enter the contact's cell phone number: ");
		scanf("%20[^\n]", numbers->cell);
	}
	printf("Do you want to enter a home phone number? (y or n): ");
	scanf("%c", &option);
	while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%20[^\n]", numbers->home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &option);
	while (option != 'y' && option != 'Y' && option != 'n' && option != 'N');
	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%20[^\n]", numbers->business);
	}
}