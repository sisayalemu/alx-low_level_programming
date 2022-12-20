#include "main.h"
/**
 *swap_int - swap two integers 
 *@a: variable a to be tested
 *@b: variable b to be tested
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	a* = *b;
	*b = swap;
}
