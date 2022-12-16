#include "main.h"

/**
 * _isdigit - chech for is it digit or not
 * @c: var to check for 
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
