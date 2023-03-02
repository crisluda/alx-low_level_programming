#include "main.h"
/**
 * _strncpy - this is the main function
 * @dest: is an char
 * @src: is an char
 * @n: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
