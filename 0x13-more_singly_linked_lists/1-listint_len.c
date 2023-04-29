#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * @h: Head of list
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t Nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		Nodes++;
	}
	return (Nodes);
}
