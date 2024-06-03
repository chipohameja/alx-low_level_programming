#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area to fill
 * @b: Constant byte being placed
 * @n: How many areas of s to fill
 * Return: Filled memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0, j;

	while (*(s + i) != '\0')
	{
		for (j = 0; j < n; j++)
		{
			*(s + i) = b;
			break;
		}

		i++;
	}

	return (s);
}
