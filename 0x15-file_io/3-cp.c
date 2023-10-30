#include "main.h"

char *create_buffer(char *file);
void close_file(int cr);

/**
 * create_buffer - Starting point
 * @file: file name
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer;

buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}

return (buffer);
}

/**
 * close_file - Starting point
 * @cr: The file descriptor to be closed.
 */
void close_file(int cr)
{
int c;

c = close(cr);

if (c == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cr);
exit(100);
}
}

/**
 * main - Starting point
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
int from, to, run, swim;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
run = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (from == -1 || run == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}

swim = write(to, buffer, run);
if (to == -1 || swim == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}

run = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);

} while (run > 0);

free(buffer);
close_file(from);
close_file(to);

return (0);
}
