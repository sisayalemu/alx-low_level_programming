#include "main.h"

/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: variable for file to be used
 * @text_content: variable for content to append into the file
 *
 * Return: success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, x, y = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(file, text_content, y);
		if (x != y)
			return (-1);
	}

	close(file);

	return (1);
}
