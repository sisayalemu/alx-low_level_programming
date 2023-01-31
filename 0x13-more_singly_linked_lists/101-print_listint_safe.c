#include "lists.h"
/**
 * print_listint_safe - function that print list safely
 * @head:pointer to the first node
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t number = 0;
	long int unique;

	while (head)
	{
		unique = head - head->next;
		number++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (unique > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number);
}
