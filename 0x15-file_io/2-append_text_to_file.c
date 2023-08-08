#include "main.h"

/**
 * append_text_to_file - Starting point
 * @filename: file
 * @text_content: string
 * Return: 1 or -1 if file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
int cr, b, l = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}
cr = open(filename, O_WRONLY | O_APPEND);
b = write(cr, text_content, l);

if (cr == -1 || b == -1)
return (-1);
close(cr);
return (1);
}
