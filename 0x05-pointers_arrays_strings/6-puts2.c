#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of string
 * @str: Pointer to character
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = 0, count = 0;
	/*char *i = str;*/

	while (str[len] != '\0')
	{
		len++;
	}

	while (count < len)
	{
		printf("%c", str[count]);

		count += 2;
	}

	printf("\n");
}
