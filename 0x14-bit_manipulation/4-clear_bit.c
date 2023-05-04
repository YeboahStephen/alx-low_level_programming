#include "main.h"

/**
 * clear_bit - A function that sets the value of
 * a bit to zero at a given index
 * @index: Starting from the bit
 * @n: pointer to the number to change
 * Return: 1 if worked or -1 if an error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
