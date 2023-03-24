#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)

{

	int q, y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (q = 0; q < size; q++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
