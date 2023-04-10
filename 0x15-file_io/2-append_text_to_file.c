#include "main.h"

/**
 * append_text_to_file - appemd text at the end of a file.
 * @filename: name of file
 * @text_content: string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	size_t len = 0;
	int fdes, written;

	if (filename == NULL)
		return (-1);
	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
		return (-1);
	while (text_content && text_content[len] != '\0')
		len++;
	if (text_content)
	{
		written = write(fdes, text_content, len);
		if (written == -1)
		{
			close(fdes);
			return (-1);
		}
	}
	close(fdes);
	return (1);
}
