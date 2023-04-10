#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: string
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	size_t count = 0;
	int fdes, written;

	if (filename == NULL)
		return (-1);
	fdes = open(filename, O_CREAT | O_TRUNC | O_WRONLY,
			S_IRUSR | S_IWUSR);
	if (fdes == -1)
		return (-1);
	while (text_content && text_content[count] != '\0')
		count++;
	if (text_content)
	{
		written = write(fdes, text_content, count);
		if (written == -1)
		{
			close(fdes);
			return (-1);
		}
	}
	close(fdes);
	return (1);
}
