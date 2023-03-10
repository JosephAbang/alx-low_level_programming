#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
