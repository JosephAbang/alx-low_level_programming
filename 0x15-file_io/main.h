#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define  BUFF_SIZE 1024

int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void handle_error(int exit_code, char *file_from, char *file_to, 
		int fd_from, int fd_to);


#endif /* MAIN_H */
