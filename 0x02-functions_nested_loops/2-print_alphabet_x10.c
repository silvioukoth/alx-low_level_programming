#include "Ukoth.h"

/**
 * main -> prints alphabet 10 times in lowercase followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}

}

