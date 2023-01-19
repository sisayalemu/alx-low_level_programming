#include "function_pointers.h"
/**
 * array_iterator - funtion that execute a function passed as parameter
 * @array: variable for integer
 * @size: variable for size
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int a;

if (array == NULL || action == NULL)
return;

for (a = 0; a < (int) size; a++)
{
action(array[a]);
}
}
