#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first linking
 * @s2: second linking
 * @n: NULL
 * Return: 0 when null is passed
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int u = 0, v = 0, w = 0, x = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[u])
		u++;

	while (s2[w])
		w++;

	if (n >= w)
		x = u + w;
	else
		x = u + n;

	str = malloc(sizeof(char) * x + 1);
	if (str == NULL)
		return (NULL);

	w = 0;
	while (v < x)
	{
		if (v <= u)
			str[v] = s1[v];

		if (v >= u)
		{
			str[v] = s2[w];
			w++;
		}
		v++;
	}
	str[v] = '\0';
	return (str);
}
