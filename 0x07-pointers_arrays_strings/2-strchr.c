#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String being searched
 * @c: Character to search
 * Return: Pointer to first occurence if character
 * NULL if character not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
