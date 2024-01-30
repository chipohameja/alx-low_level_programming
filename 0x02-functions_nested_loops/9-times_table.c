#include <stdio.h>
#include "main.h"
/**
 *times_table - prints timestable of 9
 *Return: Noting.
 */
void times_table(void)
{
	int i;

	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d", i * j);
			if (j != 9)
			{
				putchar(44);
				if ((j + 1) * i >= 10)
					putchar(' ');
				else
					printf("  ");
			}
		}
		printf("\n");
	}
}
