#include "main.h"
/**
 * string_toupper - a function for a purpose of uppercasing lowercase letter
 * @n: variable being used as an array holder
 * Return: it return ana array
 */
char *string_toupper(char *n)
{
	int k;

	k = 0;

	while (n[k] != '\0')
	{
		if (n[k] >= 'a' && n[k] <= 'z')
		{
			n[k] = n[k] - 32;
		}
		k++;
	}

	return (n);
}
