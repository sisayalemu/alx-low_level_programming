#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - a function printing a password
 * Return: Always 0 (success)
 */
int main(void)
{
	int asc;
	int a;
	int b;
	int randm;
	char pass[100];
	time_t t;

	a = 0;
	asc = 2772;

	srand((int) time(&t));

	while (asc > 126)
	{
		randm = rand() % 126;
		pass[a] = randm;
		asc -= randm;
		a++;
	}
	if (asc > 0)
	{
		pass[a] = asc;
	}
	else
	{
		a--;
	}

	for (b = 0; b <= a; b++)
	{
		printf("%c", pass[b]);
	}

	return (0);
}
