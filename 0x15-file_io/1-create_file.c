#include "main.h"

/**
 * create_file - Starting point
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: -1.
 */
int create_file(const char *filename, char *text_content)
{
int cr, w, l = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}

cr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(cr, text_content, l);

if (cr == -1 || w == -1)
return (-1);

close(cr);

return (1);
}
