#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n < 0)
		return;

	while (i < n)
	{
		printf("%d", a[i]);

		if (n - i > 1)
			printf(", ");

		i++;
	}

	printf("\n");
}
