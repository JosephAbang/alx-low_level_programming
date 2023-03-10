#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: argument vector
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	while (*argv)
	{
		argv++;
	}
	printf("%d\n", argc - 1);
	return (0);
}
