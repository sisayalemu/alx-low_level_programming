#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a newNode node at the beginning
 * @head: variable for pointer to the list_t
 * @str: variable for string
 *
 * Return: the new Node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = (*head);
	(*head) = newNode;

	return (*head);
}
