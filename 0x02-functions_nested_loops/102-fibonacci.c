#include "main.h"
#include <stdio.h>

/**
 * main - main function
 * Description: print fibonnaci from 1 to 50
 * Return: 0
 */
int main(void)
{
	long pn = 1, nn = 2, temp;
	int i = 0;

	printf("%lu, ", pn);
	printf("%lu, ", nn);

	while (i < 48)
	{
		temp = nn;
		nn = nn + pn;
		pn = temp;

		if (i != 47)
			printf("%lu, ", nn);
		else
			printf("%lu\n", nn);

		i++;
	}

	return (0);
}
