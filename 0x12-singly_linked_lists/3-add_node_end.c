#include "lists.h"
/**
 * add_node_end -  a function that adds a new node at the
 * end of a list_t list.
 * @head: double pointer to head pointer
 * @str: string to be added
 *
 * Return: pointer to new node at end of linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	char *str1;
	list_t *last;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
		;
	last = *head;
	str1 = strdup(str);
	new_node->str = str1;
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (new_node);
}
