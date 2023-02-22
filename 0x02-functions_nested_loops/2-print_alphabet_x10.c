#include "main.h"
/**
 * print_alphabet_x10 - this is the main function
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_alphabet_x10(void)
{
	int number = 10;

	for (number = 1; number <= 10; number++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
			_putchar('\n');
	}

}
