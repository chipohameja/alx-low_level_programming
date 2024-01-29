#include <stdio.h>
#include "main.h"

/**
 * _abs - print absolute integer value
 * @i: absolute value to print
 * Return: absolute value of i
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	return (i);
}
