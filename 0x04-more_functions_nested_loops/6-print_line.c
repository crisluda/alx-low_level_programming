#include "main.h"
/**
 * print_line - this is the main function
 * @n: n is an int
 * @ m: m ia an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_line(int n)
{
	int m;

	if (n > 0)
	{
	for (m = 0; m <= n; m++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
	else
	{
	if (n <= 0)
	{
	_putchar('\n');
	}
	}
}
