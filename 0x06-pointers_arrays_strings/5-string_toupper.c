#include "main.h"
/**
 * string_toupper - this is the main function
 * @p: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
	if (p[i] >= 97 && p[i] <= 122)
	p[i] = p[i] - 32;
	i++;
	}
	return (p);
}
