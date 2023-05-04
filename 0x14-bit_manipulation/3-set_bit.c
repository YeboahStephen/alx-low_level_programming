#include "main.h"

/**
 * set_bit - A function that set the value of a
 * bit to 1 at a given index
 * @index: Starting from the bit
 * @n: pointer to the number to change
 * Return: 1 if it worked or -1 if error occured
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
