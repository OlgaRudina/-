/* -------------------------------------------
Name:
Student number:
Email:
Section:
Date:
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"


// Get and store from standard input the values for Name
// Put your code here that defines the Contact getName function:


void getName(struct Name *name)

{
	char option;
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]", name->firstName);
	printf("Do you want to enter a middle initial(s)? (y or n): ");
	scanf(" %c", &option);

	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf(" %7[^\n]", name->middleInitial);

	}

	printf("Please enter the contact's last name: ");
	scanf(" %35[^\n]", name->lastName);

}

// Get and store from standard input the values for Address

void getAddress (struct Address *address)

{
	char option;
	printf("Please enter the contact's street number: ");
	scanf(" %d", &address->streetNumber);

	if (address->streetNumber < 0)
	{
		printf("\nError! Try Again.");
		printf("\nPlease enter the contact's street number: ");
		scanf(" %d", &address->streetNumber);
	}

	printf("Please enter the contact's street name: ");
	scanf(" %40[^\n]", address->street);

	printf("Do you want to enter an apartment number? (y or n): ");
	scanf(" %c", &option);

	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's apartment number: ");
		scanf(" %d", &address->apartmentNumber);

		if (address->apartmentNumber < 0) {
			printf("\nError! Try Again.");
			printf("\nPlease enter the contact's apartment number: ");
			scanf(" %d", &address->apartmentNumber);
		}
	}
	printf("Please enter the contact's postal code: ");
	scanf(" %7[^\n]", address->postalCode);

	printf("Please enter the contact's city: ");
	scanf(" %40[^\n]", address->city);

}


// Get and store from standard input the values for Numbers

// Put your code here that defines the Contact getNumbers function:

void getNumbers (struct Numbers *numbers)

{
	char option;
	printf("Do you want to enter a cell phone number? (y or n): ");
	scanf(" %c", &option);

	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's cell phone number: ");
		scanf(" %20[^\n]", numbers->cell);
	}

	printf("Do you want to enter a home phone number? (y or n): ");
	scanf(" %c", &option);

	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's home phone number: ");
		scanf(" %20[^\n]", numbers->home);
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	scanf(" %c", &option);

	if (option == 'y' || option == 'Y')
	{
		printf("Please enter the contact's business phone number: ");
		scanf(" %20[^\n]", numbers->business);
	}
}

