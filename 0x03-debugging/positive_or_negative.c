#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - assign a random number to the variable n each time it is executed and
 * print whether the number stored in the variable n is positive or negative.
 *
 * Return: int
 */

int positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
