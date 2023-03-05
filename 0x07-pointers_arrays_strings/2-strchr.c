#include "main.h"
/**
 * _strchr - this is the main function
 * @s: is an int
 * @c: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
	if (s[i] == c)
	{
	return (&s[i]);
	}
	}
	return (0);
}
