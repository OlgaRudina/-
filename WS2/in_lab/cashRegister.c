/*
Name:      <Olga Rudina>
Student#:  <039949136>
Section:   <J>
*/

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:
#include<stdio.h>

int main(void)

{
	int loonies, quaters;
	double cash, remainder, remainder2;

	printf("Please enter the amount to be paid: $"); /*Print input*/
	scanf("%lf", &cash); /*get input*/
	loonies = cash; /*Calculate loonies*/
	printf("Loonies required: %d,", loonies);
	remainder = cash - loonies; /*Remaining after substracting loonies*/
	printf(" balance owing $%.2f\n", remainder);
	quaters = remainder / 0.25; /*Calculate quaters*/
	printf("Quarters required: %d,", quaters);
	remainder2 = remainder - quaters*0.25; /*Remaining after substracting quaters*/
	printf(" balance owing $%.2f\n", remainder2);  /*Display results*/

return 0;
}
