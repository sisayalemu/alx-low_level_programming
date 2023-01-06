#include "main.h"
/**
 * _strstr - function for locating
 * @haystack: variable for pointer
 * @needle: variable for pointer
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;
 
		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
 
		if (*n == '\0')
			return (haystack);
	}
 
	return (0);
}
