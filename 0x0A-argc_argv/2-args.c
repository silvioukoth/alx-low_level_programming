#include <stdio.h>

/**
 * main -> print all arguments passedto it
 * @argc: argument to pass to it
 * @argv: argument vector that can be change to strin
 *
 * Return: always 0
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
