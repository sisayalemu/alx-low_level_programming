#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: integer value
 */
int main(int argc, char *argv[])
{
unsigned long multi;
int a, b;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[i][b] != '\0'; b++)
		{
			if (argv[i][b] > 57 || argv[i][b] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	multi = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", multi);
return (0);
}
