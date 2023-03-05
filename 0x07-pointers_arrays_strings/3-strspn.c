#include "main.h"
/**
 * _strspn - this is the main function
 * @s: is an int
 * @accept: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	{
	j++;
	break;
	}
	else if (accept[i + 1] == '\0')
	return (j);
	}
	s++;
	}
	return (j);
}
