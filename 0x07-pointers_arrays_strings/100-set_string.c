#include "main.h"
/**
 * set_string -  function that sets the value of a pointer to a char
 * @s: variable for pointing to pointer
 * @to: variable for pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
