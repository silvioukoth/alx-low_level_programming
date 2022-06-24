#include "main.h"
#include <stdio.h>

/**
 * main -> prints all arguments it recieves
 * @argc: checks the numbers of argument passed to the program
 * @argv: argument vector of pointers to strings
 *
 * return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

