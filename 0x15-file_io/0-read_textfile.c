#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: name of file
 * @letters: number of filws to be read
 * Return: number of files read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fpr;
	char buff[1024];
	ssize_t count = 0, n;

	if (filename == NULL)
		return (0);
	fpr = fopen(filename, "rb");
	if (fpr == NULL)
		return (0);
	n = fread(buff, sizeof(char), letters, fpr);
	while (buff[count] != '\0')
	{
		_putchar(buff[count]);
		count++;
	}
	fclose(fpr);
	return (n);
}
