#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The size in bytes for the new memory block
 *
 * Return: If new_size == old_size - ptr
 *         If new_size == 0 and ptr is not NULL - NULL
 *         Otherwise - a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *num;
	char *ptr_copy, *ping;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		num = malloc(new_size);

		if (num == NULL)
			return (NULL);

		return (num);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	num = malloc(sizeof(*ptr_copy) * new_size);

	if (num == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ping = num;

	for (index = 0; index < old_size && index < new_size; index++)
		ping[index] = *ptr_copy++;

	free(ptr);
	return (num);
}
