#include "main.h"
/**
 * print_square - this is the main function
 * @size:  size is an int
 * @ i: is an int
 * @ j: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	{
	if (size <= 0)
	{
	_putchar('\n');
	}
	}
}
