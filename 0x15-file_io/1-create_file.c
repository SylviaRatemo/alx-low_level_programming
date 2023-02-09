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
	int sz, fd, len = 0;
	
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	len = strlen(text_content);
	sz = write(fd, text_content, len);
	

	if (fd < 0 | filename == NULL | sz < 0)
		return (-1);

	close(fd);
	return (1);
}
