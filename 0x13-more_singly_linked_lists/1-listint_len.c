#include "lists.h"
#include <stdio.h>

/**
 * stint_len - Returns the number of elements
 *             in a linked listint_t list.
 * @h: @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
