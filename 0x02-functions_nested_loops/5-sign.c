#include "main.h"
/**
 * print_sign - this is the main function
 * @n: the starting point of the program
 * Return: the main have to return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
