#include "main.h"
#include <stdlib>

/**
 * create_array - function that creates an array of chars\
 * @size: int variable for size
 * @c: char variable
 * Return: it return an array
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(c) * size);

	if (str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;

	return (str) = c;
}
