#include "main.h"
/**
 * _strncat - this is the main function
 * @dest: is an char
 * @src: is an char
 * @n: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
