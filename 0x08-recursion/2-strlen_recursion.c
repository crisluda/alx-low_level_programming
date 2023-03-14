#include "main.h"
/**
 * _strlen_recursion - this is the main function
 * @s: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
	len++;
	len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
