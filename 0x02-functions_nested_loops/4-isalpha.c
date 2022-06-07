#include "Ukoth.h"

/**
 * _isalpha -> checks for alphatbetic character
 * Description: checks for c alphabet
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
 * @c:input
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

