#include "main.h"

/**
 * _strlen - Returns length of string
 * @s: String whose length is returned
 * Return: Integer length of string s
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
