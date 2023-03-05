#include "main.h"
/**
 * print_chessboard - this is the main function
 * @a: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	_putchar(a[i][j]);
	_putchar('\n');
	}
}
