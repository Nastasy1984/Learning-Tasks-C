#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define ROW 3
#define COL 10

int main()
{
	int arr[ROW][COL];
	srand(time(0));
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 100;
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Element are sorted in ascending order in columns: ");
	int flag2 = 0;
	for (int i = 0; i < COL; i++)//looking for columns where elements are sorted in ascending order
	{
		int flag = 0;
		for (int j = 1; j < ROW; j++)
		{
			if (arr[j][i] > arr[j - 1][i])
			{
				flag = 1;
				continue;
			}
			else if (arr[j][i] <= arr[j - 1][i])
			{
				flag = 0;
				break;
			}
		}
		if (flag)
		{
			printf(" %d", (i+1));//printing the numbers of columns with sorted elements
			flag2 = 1;
		}
	}
	if (!flag2)
		printf("unfortunately there are no such columns in this array!");
	return 0;
}