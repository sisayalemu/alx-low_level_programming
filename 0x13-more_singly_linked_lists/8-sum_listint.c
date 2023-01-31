#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - function that summ all the data in list
 * @head: variable for pointing to the first node
 * Return: total sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;

	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
