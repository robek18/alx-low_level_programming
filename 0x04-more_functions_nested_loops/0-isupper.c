#include "main.h"
#include <stdio.h>

/**
 * _isupper - check is c is upper.
 * @c: to be checked
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
