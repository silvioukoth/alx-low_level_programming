#include "_putchar.h"

/**
 * main -> prints _putchar followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char c[10] = "_putchar"
	int i = 0

	while (i < 9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}

