#include <stdio.h>
#include <stdlib.h>

/**
 * main -> multiplies two numbers
 * @argc: argument to passed to it
 * @argv: argument vector to pass to string
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int i, j, c;

	i = 1;
	j = 2;
	c = 3;
	if (argc != c)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
	return (0);
}
