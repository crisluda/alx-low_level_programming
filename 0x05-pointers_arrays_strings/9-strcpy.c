#include "main.h"
/**
 * _strcpy - this is the main function
 * @dest: is an
 * @src: is an
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0, x;

	while (*(src + l) != '\0')
		l++;
	for (x = 0; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
