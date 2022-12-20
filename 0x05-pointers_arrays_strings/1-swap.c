#include "main.h"
/**
 * swap_int - function that swap two number
 * @a: var a to be inputed
 * @b: var b to be inputed
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
