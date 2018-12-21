#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define ROW 5
#define COL 4

int main()
{
	int arr[ROW][COL];
	srand(time(0));
	for (int i = 0; i < ROW; i++)//input numbers into array and printing the array
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 41 - 20;
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	int arr1[COL][ROW];//creating new array for the transposed matrix

	for (int i = 0; i < COL; i++)
	{
		for (int j = 0; j < ROW; j++)
		{
			arr1[i][j] = arr[j][i];
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}