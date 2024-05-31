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
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}

	*(dest + inc) = '\0';

	return (dest);
}
