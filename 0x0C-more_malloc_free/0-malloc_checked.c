#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: variable for size of integer
 *
 * Return: allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
