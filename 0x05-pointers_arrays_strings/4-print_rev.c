#include "main.h"
/**
 * print_rev - this is the main function
 * @s: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_rev(char *s)
{
	int len = 0;
	int o;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	s--;
	for (o = len; o > 0; o--)
	{
	_putchar(*s);
	s--;
	}
	_putchar('\n');
}
