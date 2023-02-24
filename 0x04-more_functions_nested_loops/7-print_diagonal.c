#include "main.h"
/**
 * print_diagonal - this is the main function
 * @n: n is an int
 * @ k: k is an int
 * @ i: i is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_diagonal(int n)
{
	int k;
	int i;

	if (n > 0)
	{
	for (k = 0; k < n; k++)
	{
	for (i = 0; i < k; i++)
	{
	_putchar(' ');
	}
	_putchar(92);
	_putchar('\n');
	}
	}
	else
	{
	if (n <= 0)
	{
	_putchar('\n');
	}
	}
}
