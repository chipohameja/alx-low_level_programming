#include "main.h"

/**
 * string_toupper - Convert string to uppercase
 * @s: String being converted to uppercase
 * Return: Uppercase string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 97 && *(s + i) <= 122)
			*(s + i) -= 32;
		i++;
	}

	return (s);
}
