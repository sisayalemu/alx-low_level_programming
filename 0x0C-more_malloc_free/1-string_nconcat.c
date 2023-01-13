#include "main.h"
#include <stdlib.h>

/**
 * string_np - function that penates two strings
 * @s1: variable for the first string
 * @s2: variable for the second string
 * @n: variable for integer
 * Return: the concacnated string
 */
char *string_np(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int length = n, a;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a]; a++)
		length++;

	p = malloc(sizeof(char) * (length + 1));

	if (p == NULL)
		return (NULL);

	length = 0;

	for (a = 0; s1[a]; a++)
		p[length++] = s1[a];

	for (a = 0; s2[a] && a < n; a++)
		p[length++] = s2[a];

	p[length] = '\0';

	return (p);
}
