#include "main.h"
/**
 * _isupper - function for checking uppercase
 * @c: variable for integer
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
