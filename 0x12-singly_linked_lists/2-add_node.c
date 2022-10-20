#include "lists.h"
/**
* add_node - adds a new node at the beginning
* of a ;ist_t list.
* @head: head of the linked list.
* @str: string to store in the list.
* Return: address of head.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t n;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	n_node->len = n;
	n_node->next = *head;
	*head = n_node;
}
