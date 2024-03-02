#include "main.h"

/**
 * swap_int - Swaps values of 2 integers
 * @a: First integer
 * @b: Second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
