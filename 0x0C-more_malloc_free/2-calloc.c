#include <stdlib.h>
#include "main.h"
/**
  * _calloc - function that allocates memory
  * @nmemb: variable for integer
  * @size: variable for integer
  *
  * Return: allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)(ptr) + a) = 0;
	}

	return (ptr);
}
