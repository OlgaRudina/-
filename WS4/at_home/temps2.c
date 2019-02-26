// Name: Olga Rudina
// Student Number:
// Section:J
// Workshop:4


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAXDAYS 10

// Put your code below:

int main(void)
{
	int i;
	int dayNum;
	int high[MAXDAYS], low[MAXDAYS];
	int theHighest = 0;
	int theLowest = 0;
	int dayHigh;
	int dayLow;
	int flag = 0;
	double average = 0;


	printf("---=== IPC Temperature Calculator V2.0 ===---\n");

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &dayNum);

	while (dayNum < 3 || dayNum > 10) {
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &dayNum);
	}

	printf("\n");

	for (i = 0; i < dayNum; i++) {
		printf("Day %d - High: ", i + 1);
		scanf("%d", &high[i]);
		printf("Day %d - Low: ", i + 1);
		scanf("%d", &low[i]);

	}

	printf("\nDay  Hi  Low\n");
	for (i = 0; i < dayNum; i++) {
		printf("%d    %d    %d\n", i + 1, high[i], low[i]);

		if (theHighest < high[i]) {
			theHighest = high[i];
			dayHigh = i + 1;
		}

		if (theLowest > low[i])
		{
			theLowest = low[i];
			dayLow = i + 1;
		}
	}

	printf("\nThe highest temperature was %d, on day %d\n", theHighest, dayHigh);
	printf("The lowest temperature was %d, on day %d\n", theLowest, dayLow);


	printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
	scanf("%d", &dayNum);

	while (flag == 0)
	{
		if (dayNum == 0 || dayNum > 4)
	{
		printf("\nInvalid entry, please enter a number between 1 and 4, inclusive: ");
		scanf("%d", &dayNum);
	}
		else if (dayNum > 0 && dayNum < 5)
		{
			for (i = 0; i < dayNum; i++)
			{
				average += (high[i] + low[i]);
			}

			printf("\nThe average temperature up to day %d is: %.2f\n", i, average / (i * 2));
			average = 0;

			printf("\nEnter a number between 1 and 4 to see the average temperature for the entered number of days, enter a negative number to exit: ");
			scanf("%d", &dayNum);
		}

		else {
		printf("\nGoodbye!");
		printf("\n");
		flag = 1;
	}
	}

	return 0;
}