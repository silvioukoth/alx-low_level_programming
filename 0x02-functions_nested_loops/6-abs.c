#include "main.h"

#include <stdio.h>

/**
 *  _abs - Computes the absolute value of an integer
 *  @n: integer to check
 *
 *  Return: n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n *= -1;
		return (n);
	}
}
