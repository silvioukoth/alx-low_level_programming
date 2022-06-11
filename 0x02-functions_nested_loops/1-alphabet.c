#include "main.h"

/**
 * prints_alphabets - entry point
 * Description: show the alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
