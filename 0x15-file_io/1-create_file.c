#include "main.h"

/**
 * create_file - function creates a file and fills it with text
 * @filename: variable for name of the file
 * @text_content: variable for text to be written
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, w, i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		w = write(file, text_content, i);
		if (w != i)
			return (-1);
	}

	close(file);

	return (1);
}
