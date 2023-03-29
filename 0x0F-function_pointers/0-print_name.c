#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - this is the main function
 * @name: string
 * @f: pointer
 * Return: the main have to return nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
