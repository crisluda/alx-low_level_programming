#include <stdio.h>
/**
 * main - this is the main function
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int main(void)
{
	char c, d;

	for (c = 0; c <= 9; c++)
	{
	putchar(c + '0');
	}
	for (d = 'a'; d <= 'f'; d++)
	{
	putchar(d);
	}
	putchar('\n');
	return (0);
}
