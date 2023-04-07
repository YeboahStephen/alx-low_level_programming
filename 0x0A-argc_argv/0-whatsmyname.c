#include "main.h"
#include <stdio.h>

/**
 * main - Function that prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
	(void) argc;
	print("%s\n", argv[]);

	return (0);
}
