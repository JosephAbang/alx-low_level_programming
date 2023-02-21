#include <unistd.h>

/**
 * _putchar - wirtes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * ON ERROT, -1 is returned, and errno is set appopriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
