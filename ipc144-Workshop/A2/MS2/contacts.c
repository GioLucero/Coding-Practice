#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#include "contactHelpers.h"

#include "contacts.h"

void getName (struct Name *pname){
	
	printf("Please enter the contact's first name: ");
	scanf("%30s",(*pname).firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	if(yes()==1){
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6s",(*pname).middleInitial);
	}
	printf("Please enter the contact's last name: ");
	scanf("%35s",(*pname).lastName);
}

void getAddress (struct Address *paddr){

	printf("Please enter the contact's street number: ");
	(*paddr).streetNumber=getInt();
	printf("Please enter the contact's street name: ");
	scanf(" %[^\n]",(*paddr).street);
	printf("Do you want to enter an apartment number? (y or n): ");
	if(yes()==1){
		printf("Please enter the contact's apartment number: ");
		getInt();
		(*paddr).apartmentNumber=getInt();
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %[^\n]",(*paddr).postalCode);
	printf("Please enter the contact's city: ");
	scanf(" %[^\n]",(*paddr).city);

}

void getNumbers (struct Numbers *pnum){

	printf("Please enter the contact's cell phone number: ");
	scanf(" %[^\n]",(*pnum).cell);
	printf("Do you want to enter a home phone number? (y or n): ");
	if(yes()==1){
		printf("Please enter the contact's home phone number: ");
		scanf("%20s",(*pnum).home);
	}
	printf("Do you want to enter a business phone number? (y or n): ");
	if(yes()==1){
		printf("Please enter the contact's business phone number: ");
		scanf("%20s",(*pnum).business);
	}
}

void getContact (struct Contact *pcont){
	getName(&((*pcont).name));
	getAddress(&((*pcont).address));
	getNumbers(&((*pcont).numbers));
}