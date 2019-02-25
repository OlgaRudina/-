/*
Name:      <Olga Rudina>
Student#:  <039949136>
Section:   <J>
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Paste your in-lab code below and upgrade it to the at-home specifications

int main(void)
{
	int loonies, quarters, dimes, nickels, pennies;
	double cash, GST, total, remainder; 
	
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &cash);
	GST = cash * .13;
	printf("GST: %.2lf\n", GST);

	total = cash + GST + 0.005;  
	remainder = (int)(total * 100.0);

	printf("Balance owing: $%.2lf\n", (double)remainder / 100);

	loonies = remainder / 100;
	remainder = (int)remainder % 100;
	printf("Loonies required: %d, balance owing $%.2f\n", loonies, (float)remainder / 100);
	quarters = remainder / 25;
	remainder = (int)remainder % 25;
	printf("Quarters required: %d, balance owing $%.2f\n", quarters, (float)remainder / 100);
	dimes = remainder / 10;
	remainder = (int)remainder % 10;
	printf("Dimes required: %d, balance owing $%.2f\n", dimes, (float)remainder / 100);
	nickels = remainder / 5;
	remainder = (int)remainder % 5;
	printf("Nickels required: %d, balance owing $%.2f\n", nickels, (float)remainder / 100);
	pennies = remainder / 1;
	remainder = (int)remainder % 1;
	printf("Pennies required: %d, balance owing $%.2f\n", pennies, (float)remainder / 100);
	

	return 0;
}


