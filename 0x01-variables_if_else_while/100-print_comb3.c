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
	int j;

	while (i <= '8')
	{
		for (j = '1'; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i < '8' || j < '9')
			{
			putchar(',');
			putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
