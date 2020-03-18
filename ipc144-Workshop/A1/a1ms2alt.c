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

int main(void) {
   int i, j = 11;
   char option;
   char questions[14][22] = { "first name", "middle initial(s)", "last name", "street number", "street name", "apartment number", "postal code", "city", "cell phone number", "home phone number", "business phone number", "Name Details", "Address Details", "Phone Numbers:" };
   char input[11][22]; // user input

   printf("Contact Management System\n-------------------------\n");
   for (i=0; i < 11; i++) { 
      printf("Please enter the contact's %s: ", questions[i]); 
      scanf(" %40[^\n]s", &input[i]);
      if (i == 0 || i == 4 || i >= 7 && i < 10) { 
         printf("Do you want to enter a %s? (y or n): ", questions[i+1]);
         scanf(" %c", &option); 
      }
   }
   printf("\nContact Details\n---------------"); //Print Contact Details
   for (i = 0; i < 11; i++) {
      if (i == 0 || i == 3 || i == 8) {
         printf("\n%s\n", questions[j]);
         j++;
      }
      questions[i][0] = toupper(questions[i][0]); //Takes first character of each "string" and converts it to upper-case
      printf("%s: %s\n", questions[i], input[i]);
   }
   printf("\nStructure test for Name, Address, and Numbers Done!\n");
   return 0;
}