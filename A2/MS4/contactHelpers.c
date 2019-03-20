/* -------------------------------------------
Name: Olga Rudina
Student number: 039949136
Email:
Section:J
Date:
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "contactHelpers.h"
#define MAXCONTACTS 5

// This source file needs to "know about" the SYSTEM string library functions.
// HINT: The library name is string.h.
//       #include the string.h header file on the next line:


// ----------------------------------------------------------
// Include your contactHelpers header file on the next line:



// ----------------------------------------------------------
// define MAXCONTACTS for sizing contacts array (5):



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function definitions below...            |
// +-------------------------------------------------+

// clearKeyboard:

void clearKeyboard(void)
{
	while (getchar() != '\n');
}

// pause:

void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt:

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

// getIntInRange:

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

// yes:
int yes(void)
{
	char option;
	char NL = 'x';
	int result = 0;

	do {
		scanf(" %c%c", &option, &NL);

		if (NL != '\n')

		{
			clearKeyboard();
			result = 0;
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");

		}

		else {
			switch (option)
			{
			case 'y':
			case 'Y':
			case 'n':
			case 'N':
				result = 1;
				break;

			default:
				result = 0;
				printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");

			}
		}

	} while (NL != '\n' || result != 1);

	if (option == 'y' || option == 'Y')
		return 1;
	else
		return 0;

}

// menu:
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


// ContactManagerSystem:

void ContactManagerSystem(void)
{
	int flag = 0;
	int option;
	struct Contact contacts[MAXCONTACTS] = { { { "Rick",{ '\0' }, "Grimes" },
	{ 11, "Trailer Park", 0, "A7A 2J2", "King City" },
	{ "4161112222", "4162223333", "4163334444" } },
	{
		{ "Maggie", "R.", "Greene" },
		{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
		{ "9051112222", "9052223333", "9053334444" } },
		{
			{ "Morgan", "A.", "Jones" },
			{ 77, "Cottage Lane", 0, "C7C 9Q9", "Peterborough" },
			{ "7051112222", "7052223333", "7053334444" } },
			{
				{ "Sasha",{ '\0' }, "Williams" },
				{ 55, "Hightop House", 0, "A9A 3K3", "Bolton" },
				{ "9052223333", "9052223333", "9054445555" } },
	};

	do
	{
		option = menu();
		switch (option)
		{
		case 1:
			printf("\n");
			displayContacts(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 2:
			printf("\n");
			addContact(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 3:
			printf("\n");
			updateContact(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 4:
			printf("\n");
			deleteContact(contacts, MAXCONTACTS);
			pause();
			printf("\n");
			break;

		case 5:
			printf("\n");
			searchContacts(contacts, MAXCONTACTS);
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
// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put empty function definitions below...         |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (ensures 10 chars entered)

void getTenDigitPhone(char telNum[])
{
	int needInput = 1;

	while (needInput == 1) {
		scanf("%10s", telNum);
		clearKeyboard();

		// (String Length Function: validate entry of 10 characters)
		if (strlen(telNum) == 10)
			needInput = 0;
		else
			printf("Enter a 10-digit phone number: ");
	}
}

// findContactIndex:

int findContactIndex(const struct Contact contacts[], int size, const char cellNum[])
{
	int i = 0;
	int result;
	for (i = 0; i < size; i++)
	{
		result = strcmp(contacts[i].numbers.cell, cellNum);
		if (result == 0) {
			return i;
		}
	}
	return -1;
}


// displayContactHeader
// Put empty function definition below:

void displayContactHeader(void)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("|                              Contacts Listing                               |\n");
	printf("+-----------------------------------------------------------------------------+\n");
}


// displayContactFooter
// Put empty function definition below:

void displayContactFooter(int num)
{
	printf("+-----------------------------------------------------------------------------+\n");
	printf("Total contacts: %d\n\n", num);
}

// displayContact:
// Put empty function definition below:

void displayContact(const struct Contact* contact)
{

	if (strcmp(contact->name.middleInitial, "") == 0)
	{
		printf(" %s %s\n", contact->name.firstName, contact->name.lastName);
	}
	else
	{
		printf(" %s %s %s\n", contact->name.firstName, contact->name.middleInitial, contact->name.lastName);
	}


	printf("    C: %-10s   H: %-10s   B: %-10s\n", contact->numbers.cell, contact->numbers.home, contact->numbers.business);
	printf("       %d %s, ", contact->address.streetNumber, contact->address.street);

	if (contact->address.apartmentNumber > 0)
	{
		printf("Apt# %d, ", contact->address.apartmentNumber);
	}

	printf("%s, %s\n", contact->address.city, contact->address.postalCode);
}


// displayContacts:
// Put empty function definition below:

void displayContacts(const struct Contact contacts[], int size)
{
	int i;
	int total = 0;

	displayContactHeader();

	for (i = 0; i < size; i++)
	{
		if (strlen(contacts[i].numbers.cell) > 0)
		{
			displayContact(&contacts[i]);
			total++;
		}

	}

	displayContactFooter(total);
}


// searchContacts:
// Put empty function definition below:

void searchContacts(const struct Contact contacts[], int size)
{
	char telNum[11];
	int i = 0;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(telNum);

	i = findContactIndex(contacts, size, telNum);

	if (i == -1)
	{
		printf("*** Contact NOT FOUND ***\n");
	}

	else
	{
		printf("\n");
		displayContact(&contacts[i]);
		printf("\n");
	}
}

// addContact:
// Put empty function definition below:
void addContact(struct Contact contacts[], int size)
{
	int i;
	int empty = -1;
	for (i = 0; i<size; i++)
	{
		if (strlen(contacts[i].numbers.cell) == 0)
		{
			empty = i;
		}
	}
	if (empty > -1)
	{
		getContact(&contacts[empty]);
		printf("--- New contact added! ---\n");
	}
	else
	{
		printf("*** ERROR: The contact list is full! ***");
		printf("\n");
	}
}



// updateContact:
// Put empty function definition below:

void updateContact(struct Contact contacts[], int size)
{

	char num[11] = { '\0' };
	int i;


	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(num);
	i = findContactIndex(contacts, size, num);

	if (i > 0)
	{
		printf("\nContact found:\n");
		displayContact(&contacts[i]);

		printf("\nDo you want to update the name? (y or n): ");
		if (yes() == 1)
			getName(&contacts[i].name);

		printf("Do you want to update the address? (y or n): ");
		if (yes() == 1)
			getAddress(&contacts[i].address);

		printf("Do you want to update the numbers? (y or n): ");
		if (yes() == 1)
			getNumbers(&contacts[i].numbers);

		printf("--- Contact Updated! ---\n");
	}

	else
		printf("*** Contact NOT FOUND ***\n");
}

// deleteContact:
// Put empty function definition below:

void deleteContact(struct Contact contacts[], int size)
{
	char num[11];
	int i;

	printf("Enter the cell number for the contact: ");
	getTenDigitPhone(num);
	i = findContactIndex(contacts, size, num);

	if (i > -1)
		printf("\nContact found:\n");
	displayContact(&contacts[i]);
	printf("\nCONFIRM: Delete this contact? (y or n): ");

	if (yes())
	{
		contacts[i].numbers.cell[0] = '\0';
		printf("--- Contact deleted! ---\n");
	}
}


