#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocates memory
 * @b: the size to allocate
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);

	if (y == NULL)
		exit(98);

	return (y);
}
