#include "main.h"
#include <stdio.h>
/**
* print_numbers - this is the main function
* @ n: n is a int
* discription - the starting point of the program
* Return: the main have to return 0
*/
void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
	_putchar(n + '0');
	}
	_putchar('\n');
}
