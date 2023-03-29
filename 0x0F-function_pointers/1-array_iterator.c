

#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - this is the main function
 * @array: array
 * @size: how many elem to print
 * @action: pointer to print
 * Return: he main have to return 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
