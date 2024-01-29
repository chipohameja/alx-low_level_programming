#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of number
 * @n: number whose sign to print
 * Return: int, 1 if n > 0, 0 if n = 0, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
