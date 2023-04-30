#include "lists.h"

/**
 * pop_listint - A function that delete the node of a listint_t
 * linked list, return the head node data
 * @head: Head of list
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int hnode;

	listint_t *h;
	listint_t *curr;

	if (*head == NULL)

		return (0);
	curr = *head;
	hnode = curr->n;
	h = curr->next;
	free(curr);
	*head = h;
	return (hnode);
}
