#include <stdio.h>
/**
 * main - this is the main function
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
	putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
