#include "main.h"
/**
 * print_triangle - this is the main function
 * @size: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_triangle(int size)
{
	int i, j, l;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = size - i; j > 1; j--)
	{
	_putchar(' ');
	}
	for (l = 0; l <= i; l++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
