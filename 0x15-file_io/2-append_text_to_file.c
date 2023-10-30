#include "main.h"

/**
 * append_text_to_file - Starting point
 * @filename: A pointer to the name of the file
 * @text_content: The string to add to the end of the file
 * Return: -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int m, w, l = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (l = 0; text_content[l];)
l++;
}

m = open(filename, O_WRONLY | O_APPEND);
w = write(m, text_content, l);

if (m == -1 || w == -1)
return (-1);

close(m);

return (1);
}
