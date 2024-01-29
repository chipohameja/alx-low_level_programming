#include <stdio.h>
#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: character being checked
 * Return: 1 if c is lower, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
