#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - main function (entry point)
 * Description: Print sum of all natural numbers that are multiples of 3 and 5 below 1024
 * Returns: 0
 */
int main(void)
{
	int sum = 0, i = 0;

    while(i < 10)
    {
        if (i%3 == 0)
            sum += i;
        if  (i%5 == 0)
            sum += i;
        i++;
    }

    printf("%d\n", sum);
}
