#include "main.h"

/**
 * _strncat - Concatenates 2 strings
 * @dest: Final concatenated string
 * @src: String concatenated with
 * @n: Number of bytes to concatenate from src
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);

		i++;
		j++;
	}

	return (dest);
}
