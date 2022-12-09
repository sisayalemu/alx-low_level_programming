#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int nl;
	int nr;

	for (nl = 48; nl <= 56; nl++)
	{
		for (nr = nl + 1; nr <= 57; nr++)
		{
			putchar(nl);
			putchar(nr);
			if (nl != 56 || nr != 57)
			{
				putchar(',');
				putchar(' ');
			}	
		}
	}
putchar('\n');
return (0);
}
