#include <stdlib.h>
#include "main.h"
/**
  *array_range - function that creates an array of integers.
  *@min: variable for integers
  *@max: variable for integers
  *
  *Return: new ptrointer to array
  */
int *array_range(int min, int max)
{
	int length, a;
	int *ptr;

	length = 0;

	if (min > max)
		return (NULL);

	length = ((max + 1) - min);

	ptr = malloc(length * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < length; a++)
	{
		*(ptr + a) = min + a;
	}

	return (ptr);
}
