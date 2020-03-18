/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone: 1
----------------------------------------------*/
//Structure type Name declaration
struct Name {
	char firstName[31];
	char middleInitial[7];
	char lastName[36];
};
struct Address {
	int streetNumber;
	char street[41];
	int apartmentNumber;
	char postalCode[8];
	char city[41];
};
struct Numbers {
	char cell[11];
	char home[11];
	char business[11];
};
struct Contact {
	struct Name name;
	struct Address address;
	struct Numbers numbers;
};
void getName (struct Name *pname);
void getAddress (struct Address *paddr);
void getNumbers (struct Numbers *pnum);
void getContact (struct Contact *pcont);
int yes (void);
int getInt (void);
void clearKeyboard (void);
//void printAddress (struct Address *paddr);
//void printNumbers (struct Numbers *pnum);