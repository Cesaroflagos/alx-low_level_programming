#include "main.h"

/**
 * create_file - Starting point
 * @filename: file
 * @text_content: string to write a file
 * Return: if NULL return -1
 */
int create_file(const char *filename, char *text_content)
{
int cr, b, l = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}

cr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(cr, text_content, l);

if (cr == -1 || b == -1)
return (-1);

close(cr);
return (1);
}
