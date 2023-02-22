#include "main.h"
/**
 *_abs - this is the main function
 *@n: is an int
 * Return: the main have to return 0
 */
int _abs(int n)
{
int val;

	if (n < 0)
	{
	val = n * -1;
	return (val);
	}
	return (n);
}
