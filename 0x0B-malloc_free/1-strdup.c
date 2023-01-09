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
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)

	text = (char *)malloc(sizeof(char) * (a + 1));

	if (text == NULL)
		return (NULL);

	for (b = 0; b <= a; b++)
		text[b] = str[b];

	return (text);
}
