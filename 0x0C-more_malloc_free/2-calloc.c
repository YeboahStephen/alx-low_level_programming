#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of members
 * @size: size
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int k = 0, j = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
		return (NULL);
	while (k < j)
	{
		p[k] = 0;
		k++;
	}

	return (p);
}
