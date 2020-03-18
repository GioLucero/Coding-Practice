#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

void printSectionHeader(const char*);

int main(void){

	int tstInteger;
	struct Contact contact = {{{0}}};

	printSectionHeader("yes()");
	printf("Please enter 'Y' > ");
	printf("Result: %d\n", yes() );
	printf("Please enter 'y' > ");
	printf("Result: %d\n", yes() );
	printf("Please enter 'N' > ");
	printf("Result: %d\n", yes() );
	printf("Please enter 'yes', then 'no', then 'n' > ");
	printf("Result: %d\n", yes() );

	printSectionHeader("pause()");
	pause();

	printSectionHeader("getInt()");
	printf("Enter 'ipc', then '144' > ");
	tstInteger = getInt();
	printf("Integer entered: %d\n", tstInteger);

	printSectionHeader("getIntInRange(int,int)");
	printf("Enter 'seneca', then '99', then '501', then '250' > ");
	tstInteger = getIntInRange(100,500);
	printf("Integer entered: %d\n", tstInteger);

	printSectionHeader("getContact(struct Contact *)");
	getContact(&contact);
	printf("\nValues Entered:\n");
	printf("Name: %s %s %s\n", contact.name.firstName, contact.name.middleInitial, contact.name.lastName);
	printf("Address: %d|%s|%d|%s|%s\n", contact.address.streetNumber, contact.address.street, contact.address.apartmentNumber, contact.address.postalCode, contact.address.city);
	printf("Numbers: %s|%s|%s\n", contact.numbers.cell, contact.numbers.home, contact.numbers.business);
	
	printSectionHeader("ContactManagerSystem()");
	ContactManagerSystem();

	printSectionHeader("Assign#2 - MS #2 test completed");

	return 0;
}

void printSectionHeader(const char* testName){
	printf("\n");
	printf("------------------------------------------\n");
	printf("Testing: %s\n",testName);
	printf("------------------------------------------\n");
}