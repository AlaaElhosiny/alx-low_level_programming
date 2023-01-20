#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - Func that executes a function given as a parameter on each
 * element of an array.
 * @array: int[]
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
