#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @n: input value
 * Return: n value
 */

char *leet(char *n)

{
	int j, k;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (n[j] == s1[k])
			{
				n[j] = s2[k];
			}
		}
	}
	return (n);
}
