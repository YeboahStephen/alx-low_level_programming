#include "main.h"

/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: The size of the squares triangle
 * Return: empty
 */

void print_triangle(int size)

{

	int u, v, w;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (u = 0; u < size; u++)
	{
	for (v = size- u; v > 1; v++)
	{
	_putchar(32);
	}
	for (w = 0; w <= u; w++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
