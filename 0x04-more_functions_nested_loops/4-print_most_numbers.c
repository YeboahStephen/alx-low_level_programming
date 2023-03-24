#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers, from 0 to 9
 * Description: Print the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */

void print_most_numbers(void)

{

	int x = 0;

	for (; q <= 9; q++)
	{
	if (q == 2 || q == 4)
	{
	continue;
	}
	else
	{
	_putchar(q + '0');
	}
	}
	_putchar('\n');
}
