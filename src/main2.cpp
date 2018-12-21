#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define ROW 3
#define COL 7

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

	for (int i = 0; i < ROW; i++)//initializing maxSum and minSum with the sum of the first column
	{
		maxSum += arr[i][0];
		minSum += arr[i][0];
	}
	printf("Sums in columns\n");

	for (int i = 0; i < COL; i++)//looking for the sums in columns
	{
		int sum = 0;
		for (int j = 0; j < ROW; j++)
		{
			sum += arr[j][i];
		}
		printf("%d\t", sum);
	}
	int colMin = 0, colMax = 0;
	for (int i = 0; i < COL; i++)//looking for the columns with max and min sum
	{
		int sum = 0;
		for (int j = 0; j < ROW; j++)
		{
			sum += arr[j][i];
		}
		if (sum > maxSum)
		{
			maxSum = sum;
			colMax = i;
		}
		else if (sum < minSum)
		{
			minSum = sum;
			colMin = i;
		}
	}
	
	printf("\nMinimum sum is %d maximum sum is %d\n", minSum, maxSum);

	for (int i = 0; i < ROW; i++)//changing columns with max and min sums
	{
		int temp = 0;
		temp = arr[i][colMin];
		arr[i][colMin] = arr[i][colMax];
		arr[i][colMax] = temp;
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