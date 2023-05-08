#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: v- actual number of bytes read and printed
 *        0 when function unseuccessful , fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t bh;
	ssize_t v;
	ssize_t s;

	bh = open(filename, O_RDONLY);
	if (bh == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	s = read(bh, buf, letters);
	v = write(STDOUT_FILENO, buf, s);

	free(buf);
	close(bh);
	return (v);
}

