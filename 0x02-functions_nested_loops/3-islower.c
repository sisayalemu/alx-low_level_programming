#include "main.h"
/**
 *_islower - lowercase function checker
 *@c: letter tested 
 * Return: Always 0 (success)
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	
		return (1);
	else
		return (0);
}
