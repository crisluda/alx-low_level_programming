#include "main.h"
/**
 * print_most_numbers - this is the main function
 * @ n: n is a int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
		}
		else
		{
		_putchar(n + '0');
		}
	}
	_putchar('\n');
}
