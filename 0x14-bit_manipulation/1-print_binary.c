#include "main.h"

/**
 * print_binary - A function that print the binary
 * representation of a number
 * @n: number to print in binary
 * Return: 0
 *
 */

void print_binary(unsigned long int n)

{
	int x, count = 0;
	unsigned long int current;

	for (x = 63; x >= 0; x--)
	{
		current = n >> x;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
