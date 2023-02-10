#include "main.h"

/**
 * main - funtion that copies the content of a file to another
 * @argc: variable for number of arguments
 * @argv: variable for array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_read, file_write, a, b, c;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_read = open(argv[1], O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((a = read(file_read, buf, BUFSIZ)) > 0)
	{
		if (file_write < 0 || write(file_write, buf, a) != a)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_read);
			exit(99);
		}
	}
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	b = close(file_read);
	c = close(file_write);
	if (b < 0 || c < 0)
	{
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_read);
		if (c < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
		exit(100);
	}
	return (0);
}
