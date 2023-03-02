#include "main.h"
/**
 * reverse_array - this is the main function
 * @a: is an char
 * @n: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
	j = a[i];
	a[i] = a[n];
	a[n] = j;
	}
}
