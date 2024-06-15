#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: String being searched
 * @accept: Set of bytes to search
 * Return: Pointer to s for first occurence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
				return (s + i);

	return ('\0');
}
