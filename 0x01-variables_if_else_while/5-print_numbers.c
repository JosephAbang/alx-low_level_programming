#include <stdio.h>
/**
 * main - Entry points
 *
 * Description: Print single base 10 numbers from 0
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
