#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * Return: The numbers since 0 up to 9
 */

void print_numbers(void)

{

	int a;

	for (a = 0; a <= 9; a++)
	{
	_putchar(a + '0');
	}
	_putchar('\n');

}
