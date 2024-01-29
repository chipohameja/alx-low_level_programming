#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * @void: no parameters accepted
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int a;

		for (a = 0; a <= 25; a++)
			_putchar(97 + a);
		_putchar('\n');
	}
}
