#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Starting point
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t cr;
ssize_t o;
ssize_t p;

cr = open(filename, O_RDONLY);
if (cr == -1)
return (0);

buf = malloc(sizeof(char) * letters);
p = read(cr, buf, letters);
o = write(STDOUT_FILENO, buf, p);

free(buf);
close(cr);
return (o);
}
