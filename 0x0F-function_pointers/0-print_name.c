#include "function_pointers.h"
#include<stdlib.h>
/**
 * print_name - function that prints a name
 * @name: variable for name
 * @f: variable for pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
