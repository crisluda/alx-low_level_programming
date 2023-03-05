#include "main.h"
/**
 * _strpbrk - this is the main function
 * @s: is an int
 * @accept: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	return (s);
	}
	s++;
	}
	return ('\0');
}
