#include "main.h"

/**
 * handle_error - handles errors and  exit codes
 * @exit_code: the exit code to return
 * @file_from: file from which data is to be read
 * @file_to: file to which data is to be written
 * @fd_from: file descriptor file from which data is to be read
 * @fd_to: file descriptor to which data is to be written
 *
 * Return: void
 */

void handle_error(int exit_code, char *file_from,
		char *file_to, int fd_from, int fd_to)
{
	switch (exit_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
			break;
		case 101:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
			break;
		default:
			break;
	}

	exit(exit_code);
}


/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t num_written, num_read;
	char buff[BUFF_SIZE];
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		handle_error(97, NULL, NULL, 0, 0);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		handle_error(98, argv[1], argv[2], 0, 0);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, perms);
	if (file_to == -1)
		handle_error(99, argv[1], argv[2], file_from, 0);
	while ((num_read = read(file_from, buff, BUFF_SIZE)) > 0)
	{
		num_written = write(file_to, buff, num_read);
		if (num_written == -1)
			handle_error(99, argv[1], argv[2], file_from, file_to);
	}
	if (num_read == -1)
		handle_error(98, argv[1], argv[2], file_from, file_to);
	if ((close(file_from)) == -1)
		handle_error(100, argv[1], argv[2], file_from, file_to);
	if ((close(file_to)) == -1)
		handle_error(101, argv[1], argv[2], file_from, file_to);
	return (0);
}
