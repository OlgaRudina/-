// Name: Olga Rudina
// Student Number:
// Section:J
// Workshop:4


#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS

// Put your code below:

int main(void)
{
	int i;
	int dayNum;
	int day[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int high[10], low[10];


	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &dayNum);

	while (dayNum < 3 || dayNum > 10) {
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &dayNum);
	}

	printf("\n");

	for (i = 0; i < dayNum; i++) {
		printf("Day %d - High: ", day[i]);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", day[i]);
		scanf("%d", &low[i]);

	}

	printf("\nDay  Hi  Low\n");
	for (i = 0; i < dayNum; i++) {
		printf("%d    %d    %d\n", day[i], high[i], low[i]);
	}


	return 0;
}