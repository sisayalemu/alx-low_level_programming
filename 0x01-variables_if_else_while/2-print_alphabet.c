#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */


int main(void)
{
	char a_z = 'a';

	while (a_z <= 'z')
	{
		putchar (a_z);
		a_z++;

	}

	putchar ('\n');
	return (0);

}
