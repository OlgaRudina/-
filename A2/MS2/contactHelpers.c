/* -------------------------------------------
Name: Olga Rudina
Student number: 039949136
Email:
Section:J
Date:
----------------------------------------------
Assignment: 2
Milestone:  2
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <ctype.h>
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+

// clearKeyboard:  Empty function definition 
void clearKeyboard(void)
{
	while (getchar() != '\n');
}

// pause: Empty function definition goes here:

void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt: Empty function definition goes here:

int getInt(void)
{
	int Value;
	char NL = 'x';
	
	do 
	{
		scanf("%d%c", &Value, &NL);
		if (NL != '\n') 
		{
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
			
		}
		
	} while (NL != '\n');

	return Value;
}


// getIntInRange: Empty function definition goes here:

int getIntInRange(int lower, int upper)
{
	int value = getInt();

	while (value < lower || value > upper)
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", lower, upper);
		value = getInt();
	}

	return value;
}

// yes: Empty function definition goes here:

int yes(void)
{
	char option;
	char NL;
	int result = 0;

	do { scanf(" %c%c", &option, &NL); 
	
	if (NL != '\n') 
	
	{ 
		printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: "); 
	    clearKeyboard();
	} 
	
	else { if (option == 'Y' || option == 'y')
		
		result = 1; } 
	} 
	
	while (NL != '\n'); 
	
	return result;
}

	
// menu: Empty function definition goes here:

int menu(void)
{
	int option;
	printf("Contact Management System\n"); 
	printf("-------------------------\n"); 
	printf("1. Display contacts\n"); 
	printf("2. Add a contact\n"); 
	printf("3. Update a contact\n"); 
	printf("4. Delete a contact\n"); 
	printf("5. Search contacts by cell phone number\n"); 
	printf("6. Sort contacts by cell phone number\n"); 
	printf("0. Exit"); 
    printf("\n"); 
	printf("\nSelect an option:> "); 
	option = getIntInRange(0, 6);

	return option;
}

// ContactManagerSystem: Empty function definition goes here:

void ContactManagerSystem(void)
{
	int flag = 0;
	int option;
	do
	{
		option = menu();
		switch (option)
		{
		case 1:
			printf("\n<<< Feature 1 is unavailable >>>\n\n"); 
			pause();
			printf("\n");
			break;

		case 2:
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 3:
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 4:
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 5:
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 6:
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;

		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			if (yes() == 1)
				flag = 1;
			printf("\n");
			break;

		}
	} while (flag != 1);
	
	printf("Contact Management System: terminated\n"); 
			
	}
	

	