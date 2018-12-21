#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define ROW 7
#define COL 3

int main()
{
	int arr[ROW][COL];
	int maximum[ROW] = { 0 };
	int minimum[ROW] = { 0 };
	srand(time(0));
	for (int i = 0; i < ROW; i++) //enter numbers into array
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 11;
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}

	int maxSum = 0, minSum = 0;

	for (int i = 0; i < COL; i++)//initializing maxSum and minSum with the sum of the first row
	{
		maxSum += arr[0][i];
		minSum += arr[0][i];
	}
	printf("\nSums in rows\n");

	int rowMin = 0, rowMax = 0;
	for (int i = 0; i < ROW; i++)//looking for the rows with max and min sum
	{
		int sum = 0;
		for (int j = 0; j < COL; j++)
		{
			sum += arr[i][j];
		}
		int k = i + 1;
		printf("Row %d sum %d\n", k, sum);
		if (sum > maxSum)
		{
			maxSum = sum;
			rowMax = i;
		}
		else if (sum < minSum)
		{
			minSum = sum;
			rowMin = i;
		}
	}
	printf("\nMinimum sum is %d maximum sum is %d\n", minSum, maxSum);

	for (int i = 0; i < COL; i++)//changing rows with max and min sums
	{
		int temp = 0;
		temp = arr[rowMin][i];
		arr[rowMin][i] = arr[rowMax][i];
		arr[rowMax][i] = temp;
	}

	for (int i = 0; i < ROW; i++) //printing result
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}