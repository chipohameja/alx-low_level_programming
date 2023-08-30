#include <stdio.h>
/**
 *main - point of execution.
 *@void: no parameters accepted
 *Prints the alphabet.
 *Return: 0  Program executed successfully.
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(48 + a);
		if (a < 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
