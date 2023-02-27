#include "main.h"
/**
 * swap_int - this is the main function
 * @a: is an int
 * @b: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
