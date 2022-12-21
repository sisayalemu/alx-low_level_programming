#include "main.h"
/**
 * reverse_array - a function for a purpose of reversing the array
 * @a: variable being used as an array
 * @n: variable being used for length
 */
void reverse_array(int *a, int n)
{
	int k;
	int x;

	k = 0;

	while (k < n)
	{
		n--;
		x = a[k];
		a[k] = a[n];
		a[n] = x;
		k++;
	}
}
