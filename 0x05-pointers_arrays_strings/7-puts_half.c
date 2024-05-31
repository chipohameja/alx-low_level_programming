#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints half of a string
 * @str: String whose half to print
 * Return: Void
 */
void puts_half(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len++;

	if (len % 2 > 0)
		i = (len  - 1) / 2;
	else
		i = (len / 2);

	len--;

	while (i < len)
	{
		printf("%c", str[i]);

		i++;
	}

	printf("\n");
}
