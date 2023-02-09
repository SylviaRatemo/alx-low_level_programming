#include "main.h"

/**
 * append_text_to_file - Appends text at EOF
 * @filename: pointer to file
 * @text_content: input string
 * Return: -1 on failure or lack of permission, 1 on success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	sz = write(fd, text_content, len);

	if (fd == -1 || sz == -1)
		return (-1);

	close(fd);

	return (1);
}
