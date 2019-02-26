// Name: Olga Rudina
// Student Number:
// Section:J
// Workshop:3

#define _CRT_SECURE_NO_WARNINGS
#define NUMS 4 

#include <stdio.h>

// Put your code below:

int main(void) {
	printf("---=== IPC Temperature Analyzer ===---");

	int i;
	int high;
	int low;
	int theHighest = 0;
	int theLowest = 0;
	int dayHigh = 0;
	int dayLow = 0;
	int totalHigh = 0;
	int totalLow = 0;
	double average;


	for (i = 0; i < NUMS; i++)
	{
		printf("\n");
		printf("Enter the high value for day %d: ", i + 1);
		scanf("%d", &high);
		printf("\n");
		printf("Enter the low value for day %d: ", i + 1);
		scanf("%d", &low);

		while (high>40 || high<-40 || low>40 || low<-40 || high<low)
		{
			printf("\n");
			printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\n");
			printf("Enter the high value for day %d: ", i + 1);
			scanf("%d", &high);
			printf("\n");
			printf("Enter the low value for day %d: ", i + 1);
			scanf("%d", &low);

		}

		totalHigh += high;
		totalLow += low;

		if (theHighest < high) {
			theHighest = high;
			dayHigh = i + 1;
		}

		if (theLowest > low)
		{
			theLowest = low;
			dayLow = i + 1;
		}


	}

	printf("\n");
	average = (double)(totalHigh + totalLow) / (NUMS * 2);

	printf("The average (mean) temperature was: %.2f\n", average);
	printf("The highest temperature was %d, on day %d\n", theHighest, dayHigh);
	printf("The lowest temperature was %d, on day %d\n", theLowest, dayLow);


	return 0;
}

