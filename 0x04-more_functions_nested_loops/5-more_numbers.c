#include "main.h"
/**
* more_numbers - this is the main function
* @ n: n is a int
* @ m: m is an int
* discription - the starting point of the program
* Return: the main have to return 0
*/
void more_numbers(void)
{
	int n, m;

	for (n = 0; n <= 10; n++)
	{
	for (m = 0; m <= 14; m++)
	{
	if (m >= 10)
	{
	_putchar((m / 10) + '0');
	}
	_putchar((m % 10) + '0');
	}
	_putchar('\n');
	}
}
