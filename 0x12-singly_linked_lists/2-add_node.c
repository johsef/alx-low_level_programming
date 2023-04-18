#include "lists.h"
/**
 * add_node -  a function that adds a new node at the
 * beginning of a list_t list.
 * @head: double pointer to head pointer
 * @str: string to be added
 *
 * Return: pointer to new node at beginning of linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	char *str1;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	str1 = strdup(str);
	len = strlen(str);
	new_node->str = str1;
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
