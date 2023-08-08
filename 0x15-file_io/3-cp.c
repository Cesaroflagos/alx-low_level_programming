#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_content(char *file);
void enclose(int cr);

/**
 * create_content - Starting point
 * @file: file
 * Return: 0
 */
char *create_content(char *file)
{
char *content;

content = malloc(sizeof(char) * 1024);

if (content == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (content);
}

/**
 * enclose - Starting point
 * @cr: file
 * Return:
 */
void enclose(int cr)
{
int d;

d = close(cr);

if (d == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close cr %d\n", d);
exit(100);
}
}

/**
 * main - Starting point
 * @argc: number of arguments
 * @argv: arrays
 * Return: 0
 */
int main(int argc, char *argv[])
{
int from, to, h, i;
char *content;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

content = create_content(argv[2]);
from = open(argv[1], O_RDONLY);
h = read(from, content, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || h == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(content);
exit(98);
}

i = write(to, content, h);
if (to == -1 || i == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(content);
exit(99);
}
h = read(from, content, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);
} while (h > 0);

free(content);
enclose(from);
enclose(to);
return (0);
}
