#include <stdlib.h>
#include "main.h"
/**
  * _realloc - function that reallocates a memory
  * @ptr: variable for character
  * @old_size: variable for integer
  * @new_size: variable for integer
  * Return: pointer is returned
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		p = malloc(new_size);
		if (p == NULL)
			return (p);
		for (a = 0; a < old_size; a++)
			p[a] = *((char *)ptr + 1);
		free(ptr);
	}

	return (p);
}
