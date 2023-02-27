#include "main.h"
/**
 * puts_half - this is the main function
 * @str: is an char
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void puts_half(char *str)
{
	int a, n, len;

	len = 0;
	for (a = 0; str[a] != '\0'; a++)
	len++;
	n = (len / 2);
	if ((len % 2) == 1)
	n = ((len + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}
