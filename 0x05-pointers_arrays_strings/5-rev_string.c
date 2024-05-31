#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;

	char *i = s;
	char *j;

	while (s[len] != '\0')
	{
		len++;
	}

	j = len + i - 1;

	while (i < j)
	{
		char temp = *i;

		*i = *j;
		*j = temp;

		i++;
		j--;
	}
}
