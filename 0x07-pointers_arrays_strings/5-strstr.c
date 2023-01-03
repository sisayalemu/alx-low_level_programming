#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: variable for a pointer
 * @needle: variable for pointer
 * Return: Always 0 (success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *output = haystack, *new_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (output);
		}
		needle = new_needle;
		output++;
		haystack = output;
	}

	return (0);
}
