#include "function_pointers.h"

/**
 * int_index - search for integer in array
 * @array: the array to check
 * @size: the array size
 * @cmp: the callback function. Takes integer as argument
 *
 * Return: matched index, -1 if not found or size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}

			i++;
		}
	}

	return (-1);
}
