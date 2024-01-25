#include "function_pointers.h"

/**
 * array_iterator - Iterate array
 * @array: Array to iterate
 * @size: Size of array to iterate
 * @action: Iterating callback function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if(array != NULL && size > 0 && action != NULL)
	{
		while (i < size)
		{
			action(array[i]);

			i++;
		}
	}
}
