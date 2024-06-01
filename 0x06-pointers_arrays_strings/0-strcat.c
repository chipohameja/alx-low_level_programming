#include "main.h"

/**
 * _strcat - Concatenates 2 strings
 * @dest: The final concatenated string
 * @src: The string to concatenate with
 * Return: The final concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);

		i++;
		j++;
	}

	*(dest + i) = '\0';

	return (dest);
}
