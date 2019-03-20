/* ------------------------------------------------------------------
Name: Olga Rudina
Student number: 039949136
Email:
Section:J
Date:
---------------------------------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------------------------------
Description: This header file modularizes general helper functions to
help reduce redundant coding for common repetative tasks.
---------------------------------------------------------------------*/

#include "contacts.h"
// Hint:  This header file now has functions with parameters referring to 
//        the struct Contact type so be sure to include the contacts.h header:


//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        function prototypes here...              |
// +-------------------------------------------------+

// Clear the standard input buffer
// clearKeyboard:

void clearKeyboard(void);

// pause:

void pause(void);

// getInt:

int getInt(void);

// getIntInRange:

int getIntInRange(int, int);

// yes:

int yes(void);

// menu:

int menu(void);

// ContactManagerSystem:

void ContactManagerSystem(void);

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 3 =======       |
// +-------------------------------------------------+
// | Put new function prototypes below...            |
// +-------------------------------------------------+

// Generic function to get a ten-digit phone number (provided for you)
void getTenDigitPhone(char[]);

// findContactIndex (provided for you)
int findContactIndex(const struct Contact[], int, const char[]);


// displayContactHeader
// put function prototype here:

void displayContactHeader(void);

// displayContactFooter:
// put function prototype here:

void displayContactFooter(int);

// displayContact:
// put function prototype here:

void displayContact(const struct Contact*);

// displayContacts:
// put function prototype here:

void displayContacts(const struct Contact[], int);

// searchContacts:
// put function prototype here:

void searchContacts(const struct Contact[], int);

// addContact:
// put function prototype here:

void addContact(struct Contact[], int);

// updateContact:
// put function prototype here:

void updateContact(struct Contact[], int);

// deleteContact:
// put function prototype here:

void deleteContact(struct Contact[], int);

// sortContacts:
// put function prototype here:


