#include <stdlib.h>
#include "main.h"
/**
 * _strlen - function that calculate string lengthgth
 * @string: variable for string
 * Return: string lengthgth
 */
int _strlen(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
		;
	return (a);
}
/**
 * string_nconcat - concatenate s1 and n bytes of s2; return p to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int value, length, b, c;

	value = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (value < 0)
		return (NULL);
	if (value >= _strlen(s2))
		value = _strlen(s2);

	length = _strlen(s1) + value + 1;

	p = malloc(sizeof(*p) * length);
	if (p == NULL)
		return (NULL);

	for (b = 0; s1[b] != '\0'; b++)
		p[b] = s1[b];
	for (c = 0; c < value; c++)
		p[b + c] = s2[c];
	p[b + c] = '\0';

	return (p);
}
