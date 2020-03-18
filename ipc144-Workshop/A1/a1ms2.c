/* -------------------------------------------
Name: Gio Lucero
Student number: 152669198
Email: glucero@myseneca.ca
Section: NJJ
----------------------------------------------
Assignment: 1
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "contacts.h"

int main(void)
{
    // Declare variables here:
    struct Name contactName = { ' ', ' ', ' ' };
    struct Address contactAddress = { 0, ' ', 0, ' ', ' ' };
    struct Numbers contactNumber = { ' ', ' ', ' ' };
    char input;
    
    // Display the title
    printf("Contact Management System\n");
    printf("-------------------------\n");


    // Contact Name Input:
    printf("Please enter the contact's first name: ");
    scanf(" %40[^\n]s", contactName.firstName);
    
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf(" %c", &input);
    if (input == 'y' || input == 'Y')
    {
        printf("Please enter the contact's middle initial(s): ");
        scanf(" %40[^\n]s", contactName.middleInitial);
    }
    
    printf("Please enter the contact's last name: ");
    scanf(" %40[^\n]s", contactName.lastName);

    // Contact Address Input:
    printf("Please enter the contact's street number: ");
    scanf(" %d", &contactAddress.streetNumber);
    
    printf("Please enter the contact's street name: ");
    scanf(" %[^\n]", contactAddress.street);
   
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf(" %c", &input);
    if (input == 'y' || input == 'Y')
    {
        printf("Please enter the contact's apartment number: ");
        scanf(" %d", &contactAddress.apartmentNumber);
    }
    
    printf("Please enter the contact's postal code: ");
    scanf(" %[^\n]", contactAddress.postalCode);

    printf("Please enter the contact's city: ");
    scanf(" %[^\n]", contactAddress.city);

    // Contact Numbers Input:

    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &input);

    if (input == 'y' || input == 'Y')
    {
        printf("Please enter the contact's cell phone number: ");
        scanf(" %40[^\n]s", contactNumber.cell);
    }

    printf("Do you want to enter a home phone number? (y or n): ");
    scanf(" %c", &input);
    if (input == 'y' || input == 'Y')
    {
        printf("Please enter the contact's home phone number: ");
        scanf(" %40[^\n]s", contactNumber.home);
    }

    printf("Do you want to enter a business phone number? (y or n): ");
    scanf(" %c", &input);
    if (input == 'y' || input == 'Y')
    {
        printf("Please enter the contact's business phone number: ");
        scanf(" %40[^\n]s", contactNumber.business);
    }

    // Display Contact Summary Details

    printf("\nContact Details\n");
    printf("---------------\n");
    printf("Name Details\n");
    printf("First name: %s\n", contactName.firstName);
    printf("Middle initial(s): %s\n", contactName.middleInitial);
    printf("Last name: %s\n", contactName.lastName);

    printf("\nAddress Details\n");
    printf("Street number: %d\n", contactAddress.streetNumber);
    printf("Street name: %s\n", contactAddress.street);
    printf("Apartment: %d\n", contactAddress.apartmentNumber);
    printf("Postal code: %s\n", contactAddress.postalCode);
    printf("City: %s\n", contactAddress.city);

    printf("\nPhone Numbers:\n");
    printf("Cell phone number: %s\n", contactNumber.cell);
    printf("Home phone number: %s\n", contactNumber.home);
    printf("Business phone number: %s\n", contactNumber.business);

    printf("\nStructure test for Name, Address, and Numbers Done!\n");

    // Display Completion Message



    return 0;
}