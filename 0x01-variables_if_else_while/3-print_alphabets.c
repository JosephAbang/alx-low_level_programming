#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print a to z lowercase and then upper
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
