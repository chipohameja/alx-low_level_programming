#include "main.h"

/**
 * _strncpy - Copies n bytes of src to dest
 * @dest: Final copied string
 * @src: String copied from
 * @n: How many bytes of n to copy
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
