#include "main.h"

/**
 * largest_number -> returns the largest 3 numbers
 * @a: first integer
 * @b: second integer
 * @c:third integer
 * Returns: largest number
 */

int largest_number(int a, int b, int c)
{
	int larggest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c
	}

	return (largest);
}
