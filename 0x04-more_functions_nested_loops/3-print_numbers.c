#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
