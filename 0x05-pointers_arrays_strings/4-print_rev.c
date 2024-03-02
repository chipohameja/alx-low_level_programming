#include "main.h"

/**
 * print_rev - Prints string in reverse
 * @s: String to print in reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);

		--i;
	}

	_putchar('\n');
}
