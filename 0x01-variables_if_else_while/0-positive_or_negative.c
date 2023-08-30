#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - point of execution
 *@void: no parameters accepted
 *Tells you whether a number is negative, positive or zeroe
 *Return: 0  Program executed successfully.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
