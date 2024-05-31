#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies one string to another
 * @dest: String to copy to
 * @src: String being copied
 * Return: Char address
 */
char *_strcpy(char *dest, char *src)
{
	size_t i, len = 0;

	while (src[len] != '\n')
		len++;

	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
