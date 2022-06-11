#include "main.h"
/**
 * main - entry point
 * Description: print _putchar
 * Return: 0
 */

int main(void)
{
	char word[9] = "_putchar"

		int i = 0;
	
	while(i < 9)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
