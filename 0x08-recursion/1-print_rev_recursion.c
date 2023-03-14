#include "main.h"
/**
 * _print_rev_recursion - this is the main function
 * @s: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
