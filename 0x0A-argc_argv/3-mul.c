#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -> main - Prints the multiplication of two args numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
