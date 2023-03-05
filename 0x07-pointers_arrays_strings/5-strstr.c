#include "main.h"
/**
 * _strstr - this is the main function
 * @haystack: is an int
 * @needle: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *i = haystack;
	char *j = needle;

	while (*i == *j && *j != '\0')
	{
	i++;
	j++;
	}
	if (*j == '\0')
	return (haystack);
	}
	return (0);
}
