#include <stdio.h>

/**
 * main - entry point
 * @void: does not accept parameters
 * Return: Always 0
 */

int main(void)
{
	unsigned long int prime = 612852475143;
	unsigned long int i = 3;

	while (i <= prime / 2)
		if (prime % i == 0)
			prime = prime / i;
		else
			i += 2;

	printf("%ld\n", prime);

	return (0);
}
