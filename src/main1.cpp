#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
	int arr1[SIZE] = { 0 };
	srand(time(0));
	printf("Array 1\n");
	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = (rand() % 101) - 50;
		printf("%d\t", arr1[i]);
	}
	
	int arr2[SIZE] = { 0 };
	srand(time(0));
	printf("\n\nArray 2\n");
	for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = (rand() % 51) - 25;
		printf("%d\t", arr2[i]);
	}

	int arr3[SIZE] = { 0 };
	
	for (int i = 0; i < SIZE ; i += 2)
	{
		int j = i + 1;
		arr3[i] = arr1[j];
	}

	for (int i = 1; i < SIZE; i += 2)
	{
		int j = i - 1;
		arr3[i] = arr2[j];
		
	}

	printf("\n\nArray 3\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", arr3[i]);
	}
	
	return 0;
}
