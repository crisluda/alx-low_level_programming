#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - this is the main function
 * @str: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r = 0;

	if (str == NULL)
	return (NULL);
	i = 0;
	while (str[i] != '\0')
	i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
	return (NULL);

	for (r = 0; str[r]; r++)
	aaa[r] = str[r];
	return (aaa);
}
