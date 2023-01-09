#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * @str: variable for char
 *
 * Return: pointer of an array
 */

char *_strdup(char *str)
{
	char *text;
	int a, length = 0;

	text = malloc(sizeof(char) * (length + 1));

	if (str == NULL || text == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
	{
		text[a] = str[a];
		length++;
	}

	text[length] = '\0';

	return (text);
}
