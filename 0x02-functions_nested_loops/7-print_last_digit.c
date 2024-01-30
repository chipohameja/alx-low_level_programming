#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: number whose last digit to print
 * Return: int
 */
int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;
	_putchar(l + '0');
	return (l);
}
