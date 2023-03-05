#include "main.h"
/**
 * _memcpy - this is the main function
 * @dest: is an char
 * @src: is an char
 * @n: is an unsi
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j = n;

	for (i = 0; i < j; i++)
	{
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
