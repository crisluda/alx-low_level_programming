#include "main.h"
/**
 * _puts - this is the main function
 * @str: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
