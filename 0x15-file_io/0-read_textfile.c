#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - read a text file and print it to POSIZ stdout
 * @filename: input pointer to file
 * @letters: letter count
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t file, wr, r;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	ch = malloc(sizeof(char) *letters);
	r = read(file, ch, letters);
	wr = write(STDOUT_FILENO, ch, r);

	free(ch);
	close(file);
	return (wr);
}
