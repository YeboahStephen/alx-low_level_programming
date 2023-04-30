#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth
 * node of a listint_t linked list
 * @head: Head of list
 * @index: index of node
 *
 * Return: null if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{

	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
