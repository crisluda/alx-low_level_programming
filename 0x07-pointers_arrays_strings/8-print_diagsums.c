#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - this is the main function
 * @a: is an int
 * @size: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_diagsums(int *a, int size)
{
	int sum, sum2, y;

	sum = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
	sum = sum + a[y * size + y];
	}
	for (y = size - 1; y >= 0; y--)
	{
	sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum, sum2);
}
