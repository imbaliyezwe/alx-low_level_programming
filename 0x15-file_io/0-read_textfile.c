#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd, bytes_read;
    char buffer[1024];

    if (!filename)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    bytes_read = read(fd, buffer, letters);
    if (bytes_read == -1)
    {
        close(fd);
        return (0);
    }

    while (bytes_read > 0)
    {
        if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
        {
            close(fd);
            return (0);
        }
        bytes_read = read(fd, buffer, letters);
        if (bytes_read == -1)
        {
            close(fd);
            return (0);
        }
    }

    close(fd);
    return (letters);
}


