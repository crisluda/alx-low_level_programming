#include "main.h"
/**
 * _strlen - this is the main function
 * @s: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
