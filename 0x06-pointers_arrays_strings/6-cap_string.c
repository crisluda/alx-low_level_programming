#include "main.h"
/**
 * cap_string - this is the main function
 * @str: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
	while (!(str[i] >= 'a' && str[i] <= 'z'))
	i++;
	if (str[i - 1] == ',' || str[i - 1] == ';' ||
	str[i - 1] == '.' || str[i - 1] == '!' ||
	str[i - 1] == '?' || str[i - 1] == '"' ||
	str[i - 1] == '(' || str[i - 1] == ')' ||
	str[i - 1] == '{' || str[i - 1] == '}' ||
	str[i - 1] == ' ' || str[i - 1] == '\t' ||
	str[i - 1] == '\n' || i == 0)
	str[i] = str[i] -  32;
	i++;
	}
	return (str);
}
