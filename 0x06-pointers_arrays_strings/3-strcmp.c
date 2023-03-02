#include "main.h"
/**
 * _strcmp - this is the main function
 * @s1: is an char
 * @s2: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	{
	return (s1[i] - s2[i]);
	}
	i++;
	}
	return (0);
}
