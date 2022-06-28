#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to a newly allocated space in memory
 * @str: string that can copy newly space
 *
 * Return: pointer to duplicated string or NULL if error
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *s;

	if (str == 0)
		return (NULL);

	for (i = 0; str[i]; i++)
		i++;

	s = malloc(i * sizeof(char));
	if (s == 0)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		return (NULL);
	}
	return (s);
}
