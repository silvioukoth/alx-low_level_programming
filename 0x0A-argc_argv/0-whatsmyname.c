#include "main.h"
#include <stdio.h>

/**
 * main - prints arrguments passed to it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
