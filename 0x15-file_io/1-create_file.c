#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written (null terminated)
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int sz, fd, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len; text_content[len];)
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	sz = write(fd, text_content, len);
	if (fd == -1 || sz == -1)
		return (-1);

	close(fd);
	return (1);
}
