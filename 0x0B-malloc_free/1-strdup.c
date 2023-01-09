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
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;

	while (str[a] != '\0')
		a++;

	text = malloc(sizeof(char) * (a + 1));

	if (text == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		text[b] = str[b];

	return (text);
}
