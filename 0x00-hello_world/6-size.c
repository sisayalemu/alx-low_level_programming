#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	int i;
	long int li;
	long long int lli;
	char c;
	float f;

	printf("Size of a char: %lu byte(S)\n", sizeof(c));
	printf("Size of a int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
