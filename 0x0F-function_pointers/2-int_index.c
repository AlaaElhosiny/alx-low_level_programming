#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array of int
 * @size: int
 * @cmp: ptr to func
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
