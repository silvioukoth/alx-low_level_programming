#include<unistd.h>

/**
 * _putchar -> writes character c to stdout
 * @: character to be printed out
 *
 * return: always success 1
 * On error, -1 is return and set appropriately
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

