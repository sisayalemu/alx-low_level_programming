#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 * @a: variable for a pointer
 * @size: variable for the length
 */

void print_diagsums(int *a, int size)
{
	int x, add1 = 0, add2 = 0;

	for (x = 0; x < size; x++)
	{
		add1 += *(a + (size * x + x));
		add2 += *(a + (size * x + size - 1 - x));
	}
	printf("%d, ", add1);
	printf("%d\n", add2);
}
