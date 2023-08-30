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

	int last_digit;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d greater than 5\n", n, last_digit);
	else if (last_digit == 0)
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	else if (last_digit > 6 && last_digit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		n, last_digit);

	return (0);
}
