#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @filename: name of file
 * @letters: number of filws to be read
 * Return: number of files read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	ssize_t f_content, fc_read = 0, num_write, written;
	char buff[1024];

	if (filename == NULL)
		return (0);
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);

	f_content = read(fdes, buff, sizeof(buff));
	while (f_content > 0 && fc_read < (ssize_t)letters)
	{
		num_write = letters - fc_read;
		if (num_write > f_content)
			num_write = f_content;
		written = write(STDOUT_FILENO, buff, num_write);
		if (written == -1)
		{
			close(fdes);
			return (0);
		}
		fc_read += written;
		f_content = read(fdes, buff, sizeof(buff));
	}
	close(fdes);
	return (fc_read);
}
