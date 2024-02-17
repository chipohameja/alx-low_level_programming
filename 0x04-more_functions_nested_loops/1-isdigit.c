#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @c: character being checked
 * Return: 1 is if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
