#include <stdio.h>

void clearKeyboard (void){
	while (getchar() !='\n');
}

void pause (void){
	//clearKeyboard();
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

int getInt (void){
	char NL='x';
	int Value = 0;

	do{//while(NL !='\n'){
		scanf(" %d%c",&Value,&NL);
		if(NL !='\n'){
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}
		
		
	}while(NL != '\n');
	return Value;
}

int getIntInRange(int param1, int param2){
	
	int tstValue;
	do{
		tstValue=getInt();
		if(tstValue>param2||tstValue<param1){
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ",param1,param2);
		}
	}while(tstValue>param2||tstValue<param1);
	return tstValue;
}

int yes (void){
	char NL='x';
	char Yes;
	int theReturn;
	
	do{
	//while(NL !='\n'||(Yes!='Y' && Yes!='y' && Yes!='N' && Yes!='n')){
		scanf(" %c%c",&Yes,&NL);
		if(NL !='\n' || (Yes!='Y' && Yes!='y' && Yes!='N' && Yes!='n')){
			if(NL !='\n'){
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
				clearKeyboard();
			}
		}
	}while(NL !='\n' || (Yes!='Y' && Yes!='y' && Yes!='N' && Yes!='n'));
	
	if(Yes=='Y'||Yes=='y'){
		theReturn =  1;
	}else{
		theReturn =  0;
	}
	return theReturn;
}

int menu (void){

	int option;
		printf("Contact Management System\n");
		printf("-------------------------\n");
		printf("1. Display contacts\n");
		printf("2. Add a contact\n");
		printf("3. Update a contact\n");
		printf("4. Delete a contact\n");
		printf("5. Search contacts by cell phone number\n");
		printf("6. Sort contacts by cell phone number\n");
		printf("0. Exit\n");
		printf("\n");
		printf("Select an option:> ");
		option=getIntInRange(0,6);
	return option;
}

void ContactManagerSystem (void){
	int option;
	int exit=0;
	
	do{
		option=menu();
		switch (option){
			case 0:
				printf("\n");
				printf("Exit the program? (Y)es/(N)o: ");
				exit=yes();
				printf("\n");
				break;
			case 1:
				printf("\n");
				printf("<<< Feature 1 is unavailable >>>\n");
				printf("\n");
				pause();
				printf("\n");
				//menu();
				break;
			case 2:
				printf("\n");
				printf("<<< Feature 2 is unavailable >>>\n");
				printf("\n");
				pause();
				printf("\n");
				//menu();
				break;
			case 3:
				printf("\n");
				printf("<<< Feature 3 is unavailable >>>\n");
				printf("\n");
				pause();
				printf("\n");
				//menu();
				break;
			case 4:
				printf("\n");
				printf("<<< Feature 4 is unavailable >>>\n");
				printf("\n");
				pause();
				printf("\n");
				//menu();
				break;
			case 5:
				printf("\n");
				printf("<<< Feature 5 is unavailable >>>\n");
				printf("\n");
				pause();
				printf("\n");
				//menu();
				break;
			default:
				printf("\n");
				printf("<<< Feature 6 is unavailable >>>\n");
				printf("\n");
				pause();
				printf("\n");
				//menu();
		}
	}while(option!=0 || exit==0);
	if(exit==1){
		printf("Contact Management System: terminated");
		printf("\n");
	}
}