#include <unistd.h>
#ifndef main_h
#define main_h

/**
 * _putchar - wirtes the character c to stdout
 * @c: The character to print
 *
 * return: On success 1.
 * ON ERROR, -1 is returned, and errno is set appopriately.
 */

int main(void)
{

	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
}

#endif
