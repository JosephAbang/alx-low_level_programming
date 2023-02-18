#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all possible different combination of two digits
 *
 * Return:Always 0
 */

int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '8')
	{
		j = i + 1;
		while (i <= '9' && j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i < '8' || j < '9')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
