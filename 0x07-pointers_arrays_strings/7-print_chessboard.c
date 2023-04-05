#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])

{
	int b, d;

	for (b = 0; b < 8; b++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[b][d]);
		_putchar('\n');
	}
}
