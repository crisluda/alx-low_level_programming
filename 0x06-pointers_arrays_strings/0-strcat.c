#include "main.h"
/**
 * _strcat - this is the main function
 * @dest: is an char
 * @src: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	i++;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
