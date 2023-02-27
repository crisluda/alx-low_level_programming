#include "main.h"
/**
 * print_array - this is the main function
 * @ i: is an int
 * @a: is an int
 * @n: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	printf("%d, ", a[i]);
	if (i == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
