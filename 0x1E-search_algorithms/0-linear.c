#include search_algos.c

/**
 * linear_search - searches for a value in an array using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of element in the array.
 * @value: The value to search for in the array.
 *
 * Return: If the value is not present or is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 * Description: Prints a value every time itis comppplared in the array.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
