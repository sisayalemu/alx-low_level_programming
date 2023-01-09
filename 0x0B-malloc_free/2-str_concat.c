#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: variable for pointer
 * @s2: variable for pointer
 * Return: new string
 */
char *str_concat(char *s1, char *s2)

{
	char *strConcat;
	int a, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

		a = b = 0;

	while (s1[a] != '\0')

		a++;

	while (s2[b] != '\0')

		b++;

	strConcat = malloc(sizeof(char) * (a + b + 1));

	if (strConcat == NULL)
		return (NULL);

	a = b = 0;

	while (s1[a] != '\0')
	{
		strConcat[a] = s1[a];
		a++;
	}

	while (s2[b] != '\0')
	{
		strConcat[a] = s2[b];
		a++, b++;
	}
	strConcat[a] = '\0';
	return (strConcat);
}

