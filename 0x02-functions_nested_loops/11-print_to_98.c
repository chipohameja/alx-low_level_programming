#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print numbers from n to 98
 * @n: first number to print
 * Return: void
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}

	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%d\n", i);
			else
				printf("%d, ", i);
		}
	}

	else
		printf("%d\n", n);
}
