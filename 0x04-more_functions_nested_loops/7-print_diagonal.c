#include "main.h"

/**
 * print_digonal - function that draws a diagonal line on the terminal
 * @n: The number of times to print digonal lines
 * Return: empty
 */

int print_digonal(int n)

{

	int j, k;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (j = 0; j < n; j++)
	{
	for (k = 0; k < j; k++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
