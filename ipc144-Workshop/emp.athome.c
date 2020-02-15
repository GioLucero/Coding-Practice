//==============================================
// Name:           Gio Lucero
// Student Number: 152669198
// Email:          glucero@myseneca.ca
// Section:        NJJ
// Workshop:       5 at-home
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Define Number of Employees "SIZE" to be 4 for at home
#define SIZE 4          

// Declare Struct Employee 


// and initialize all elements to zero
struct Employee {
        int id;
        int age;
        double salary;
};

/* main program */
int main(void)
{
    // vars declared
    int option = 0;
    int i;
    int numOfEmp = 0;
    int empFound;
    int empPosition;
    int empID;

    int value;

    double newSalary = 0;

    // Declare a struct Employee array "emp" with SIZE elements 
    // and initialize all elements to zero
    struct Employee {
            int id;
            int age;
            double salary;
    };
    // array of emp
    struct Employee emp[SIZE] = { {0} };

    printf("---=== EMPLOYEE DATA ===---\n\n");

    do
    {
        // Print the option list
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee\n");
        printf("0. Exit\n\n");
        printf("Please select from the above options: ");

        // Capture input to option variable
        scanf("%d",&option);
        printf("\n");

        switch (option)
        {
        case 0: // Exit the program
                printf("Exiting Employee Data Program. Good Bye!!!\n");
                break;

        case 1: // Display Employee Data
                        // @IN-LAB

                printf("EMP ID  EMP AGE EMP SALARY\n");
                printf("======  ======= ==========\n");
                for (i = 0; i < SIZE; i++) {
                        if (emp[i].id > 0)
                        printf("%6d%9d%11.2lf\n", emp[i].id, emp[i].age, emp[i].salary);
                }

                printf("\n");

                // Use "%6d%9d%11.2lf" formatting in a   
                // printf statement to display
                // employee id, age and salary of 
                // all  employees using a loop construct 

                // The loop construct will be run for SIZE times 
                // and will only display Employee data 
                // where the EmployeeID is > 0

                break;

        case 2: // Adding Employee
                        // @IN-LAB

                printf("Adding Employee\n");
                printf("===============\n");

                if (numOfEmp < SIZE) {
                        printf("Enter Employee ID: ");
                        scanf("%d", &emp[numOfEmp].id);
                        printf("Enter Employee Age: ");
                        scanf("%d", &emp[numOfEmp].age);
                        printf("Enter Employee Salary: ");
                        scanf("%lf", &emp[numOfEmp].salary);                                   
                        numOfEmp += 1;

                }
                else {
                        printf("ERROR!!! Maximum Number of Employees Reached\n");
                }
                // Check for limits on the array and add employee 
                // data accordingly. 

                printf("\n");

                break;

        case 3: // update
                printf("Update Employee Salary\n");
                printf("======================\n");

                do {
                    empFound = 0;
                    
                    printf("Enter Employee ID: ");
                    scanf("%d", &empID);
                    // iterate through array to determine if the empID is found
                    for (i = 0; i < SIZE; i++) {
                    if (empID == emp[i].id && emp[i].id != 0) {
                        // exist do while
                        empFound = 1; 
                        // tracking the matched ID's
                        empPosition = i; 
                    }
                    }
                    // if found, change salary
                    if (empFound == 1) {
                    printf("The current salary is %.2lf\n", emp[empPosition].salary);
                    printf("Enter Employee New Salary: ");
                    scanf("%lf", &emp[empPosition].salary);
                    printf("\n");
                    }
                    else {
                    printf("ERROR!!! Employee ID not found!\n");
                    }
                } while (empFound != 1); //Run until Employee ID matches 
                break;

        // remove 
        // we will use a similar do while loop from above to find the matching ID's, but this time, remove it
        case 4:
                printf("Remove Employee\n");
                printf("===============\n");

                do {
                    empFound = 1;
                    
                    printf("Enter Employee ID: ");
                    scanf("%d", &empID);
                    //iterate through array to determine if the empID is found 
                    for (i = 0; i < SIZE; i++) {
                    if (empID == emp[i].id) {
                        empFound = 0; 
                        // used to track which employees were matched 
                        empPosition = i; 
                        }
                    }
                    // if found, the emplpyee will be removed
                    if (empFound) {
                    printf("ERROR!!! Employee ID not found!\n");
                    }
                } while (empFound);
                printf("Employee %d will be removed\n\n", emp[empPosition].id);
                numOfEmp = empPosition;
                emp[empPosition].id = 0;
                

                break;
        default:
                printf("ERROR: Incorrect Option: Try Again\n\n");
        }

    } while (option != 0);

    return 0;
}


//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/
