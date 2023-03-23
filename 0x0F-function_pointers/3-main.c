#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if success, otherwise if error
 */

int main(int argc, char **argv)
{
	int a, b, result;
	char *operator;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = argv[2];
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if ((*operator == '/' || *operator == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(operator);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
