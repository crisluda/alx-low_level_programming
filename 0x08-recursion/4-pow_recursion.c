#include "main.h"
/**
 * _pow_recursion - this is the main function
 * @x: is an int
 * @y: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	if (y == 0)
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
