#include "main.h"
#include <stdlib.h>
/**
 * create_array - this is the main function
 * @size: is an int
 * @c: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;
	return (str);
}
