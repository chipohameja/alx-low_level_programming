#include "main.h"

/**
 * reverse_array - Reverses integer array
 * @a: Integer array to reverse
 * @n: Lenghth of array
 * Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0,  j = n - 1; i < j; i++, j--)
	{
		int tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
