#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 if equal, negative if s2 is
 * less than s2, otherwise positive
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, res = 0;

	while (res == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;

		res = *(s1 + i) - *(s2 + i);

		i++;
	}

	return (res);
}
