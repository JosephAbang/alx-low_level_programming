#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabeth except q and e
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		if (ch == 'p' || ch == 'd')
		{
			ch++;
			ch++;
		}
		else
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
