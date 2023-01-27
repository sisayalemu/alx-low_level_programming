#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end
 * @head: variable for first node
 * @str: vvariable for string address
 * Return: new node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_1, *node_2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	node_1 = malloc(sizeof(list_t));
	if (node_1 == NULL)
		return (NULL);

	node_1->str = strdup(str);
	if (node_1->str == NULL)
	{
		free(node_1);
		return (NULL);
	}
	while (str[length])
		length++;
	node_1->len = length;
	node_1->next = NULL;

	if (*head == NULL)
	{
		*head = node_1;
		return (node_1);
	}

	node_2 = *head;
	while (node_2->next)
		node_2 = node_2->next;
	node_2->next = node_1;
	return (node_1);
}
