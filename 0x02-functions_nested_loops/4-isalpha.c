#include "main.h"
/**
 * _isalpha - this is the main function
 * @c: is an int
 * Return: the main have to return 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);

}
