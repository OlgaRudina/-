// Name: Olga Rudina
// Student Number:
// Section:J
// Workshop:4

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 4

struct Employee
{
	int ID;
	int age;
	double salary;
};


int main(void) {

	struct Employee emp[SIZE] = { { 0 } };
	int option = 0;
	int i;
	int j;
	int empCount = 0;
	int upd;
	


	printf("---=== EMPLOYEE DATA ===---\n");

	do {
		printf("\n");
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		printf("\n");

		switch (option) {
		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");
			break;
		case 1:

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");

			for (i = 0; i < SIZE; i++)
			{
				if (emp[i].ID > 0)
				{
					printf("%6d%9d%11.2lf", emp[i].ID, emp[i].age, emp[i].salary);
					printf("\n");
				}
			}

			break;

			// Create two switch-cases for option 3 & 4 after case 2. 
			// Implement "Update Salary" and "Remove Employee" 
			// functionality as per instructions
			// inside the relevant case statements

		case 2:

			printf("Adding Employee\n");
			printf("===============\n");

			if (empCount < SIZE)
			{
				printf("Enter Employee ID: ");
				scanf("%d", &emp[empCount].ID);
				printf("Enter Employee Age: ");
				scanf("%d", &emp[empCount].age);
				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[empCount].salary);

				empCount += 1;
			}

			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n");
			}

			break;

		case 3:

			printf("Update Employee Salary\n");
			printf("======================\n");
			int flag = 0;

			do
			{
				printf("Enter Employee ID: ");
				scanf("%d", &upd);
				for  (i = 0; i < SIZE; i++)
				{
					if (upd == emp[i].ID)

					{
						printf("The current salary is %.2lf", emp[i].salary);
						printf("\n");
						printf("Enter Employee New Salary: ");
						scanf("%lf", &emp[i].salary);
						flag = 1;
					}
				}

			} while (flag == 0);


			break;

		case 4:

			do
			{
				printf("Remove Employee\n");
				printf("===============\n"); 
				printf("Enter Employee ID: ");
				scanf("%d", &upd);
				for (i = 0; i < SIZE - 1; i++)
				{
					if (upd == emp[i].ID)
					{
						j = 1;
					}

				}
				while (j < SIZE)
				{
					if (j == SIZE - 1)

					{
						emp[j].age = 0;
						emp[j].ID = 0;
						emp[j].salary = 0;
					}

					else
					{
						emp[j] = emp[j + 1];
					}

					j++;
				}

				empCount--;
				printf("Employee %d will be removed\n", upd);

			} while (SIZE < i);



			break;

		default:

			printf("ERROR: Incorrect Option: Try Again");
			printf("\n");
		}

	} while (option != 0);


	return 0;
}


// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 113
Enter Employee Age: 53
Enter Employee Salary: 120345.78

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 114
Enter Employee Age: 25
Enter Employee Salary: 46780

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
111       34   78980.88
112       41   65000.00
113       53  120345.78
114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 112
The current salary is 65000.00
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
111       34   78980.88
112       41   99999.99
113       53  120345.78
114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 112
Employee 112 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
111       34   78980.88
113       53  120345.78
114       25   46780.00

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!
*/