#include "main.h"
int is_divisible(int number, int div);
int is_prime_number(int n);
/**
 * is_divisible - func for checking divisiblity
 * @number: variable for integer
 * @div: variable for integer
 * Return: output 0 or 1
 */

int -s_divisible(int number, int div)
{
	if (number % 2 == 0)
		return (0);
	if (div == number / 2)
		return (1);

	return (is_divisible(div + 1));
}
