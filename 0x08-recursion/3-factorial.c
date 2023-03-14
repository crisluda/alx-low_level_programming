#include "main.h"
/**
 * factorial - this is the main function
 * @n: is an int
 * discription - the starting point of the program
 * Return: the main have to return 0
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
