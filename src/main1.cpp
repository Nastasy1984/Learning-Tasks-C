#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 10

/*Ввести два целочисленных массива по 10 элементов в каждом. Сфор-
мировать новый массив, на четных местах которого будут элементы с
нечетными индексами из первого массива, а на нечетных – с четными
индексами из второго.*/
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
	// распечатываем массив 3 после вставки нечетных из массива 1 на четные в массиве 3
	printf("\n\nArray 3\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d\t", arr3[i]);
	}
	
	return 0;
}
