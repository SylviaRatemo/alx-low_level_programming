#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written (null terminated)
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int sz, fd = open(filename, O_RDWR | O_CREAT);

	if (fd < 0 | filename == NULL)
		return (-1);

	sz = write(fd, text_content, strlen(text_content));
	return (1);
}
