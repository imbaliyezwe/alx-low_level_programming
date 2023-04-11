#include "main.h"
/**
 * a function that creates a file
 * where filename is the name of the file
 * to create and text_content is a NULL
 * terminated string to write to the file
 * Returns: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, text = 0;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, mode);
    if (fd == -1)
        return (-1);

    if (text_content)
    {
        while (text_content[text] != '\0')
            text++;
        if (write(fd, text_content, text) == -1)
        {
            close(fd);
            return (-1);
        }
    }
}
