#include "main.h"
/**
 * _puts_recursion - this is the main function
 * @s: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
	_putchar('\n');
	}
}
