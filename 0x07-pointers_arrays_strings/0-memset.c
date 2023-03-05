#include "main.h"
/**
 * _memset - this is the main function
 * @s: is an int
 * @b: is an char
 * @n: is unsi
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
	s[i] = b;
	n--;
	}
	return (s);
}
