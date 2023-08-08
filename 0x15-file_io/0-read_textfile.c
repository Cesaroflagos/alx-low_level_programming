#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Starting point
 * @filename: text
 * @letters: letters
 * Return: NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *b;
ssize_t fd;
ssize_t d;
ssize_t e;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
b = malloc(sizeof(char) * letters);
e = read(fd, b, letters);
d = write(STDOUT_FILENO, b, e);

free(b);
close(fd);
return (d);
}
