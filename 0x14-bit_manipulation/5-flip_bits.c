#include "main.h"

/**
 * flip_bits - A function that returns the number of bit
 * you would need to flip to get from one number to another
 *
 * @n: initial number
 * @m: second number
 * Return: the number of bit
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
