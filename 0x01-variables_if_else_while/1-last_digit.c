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

	if (n > 5)
		printf("Last digit of %d is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d is and is 0\n", n);
	else if (n > 6 && n != 0)
		printf("Last digit of %d is and is less than 6 and not 0\n", n);

	return (0);
}
