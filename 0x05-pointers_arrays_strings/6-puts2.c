#include "main.h"
/**
 * puts2 - this is the main function
 * @str: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void puts2(char *str)
{
	int len = 0;
	int k = 0;
	char *l = str;
	int m;

	while (*l != '\0')
	{
	l++;
	len++;
	}
	k = len - 1;
	for (m = 0; m <= k; m++)
	{
	if (m % 2 == 0)
	{
	_putchar(str[m]);
	}
	}
	_putchar('\n');
}
