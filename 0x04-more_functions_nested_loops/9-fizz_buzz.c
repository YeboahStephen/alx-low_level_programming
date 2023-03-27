#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the numbers from 1 to 100
 * Return: Always 0 (Success)
 */

int main(void)

{

	int b;

	for (b = 1; b <= 100; b++)
	{
	if ((b % 3 == 0) && (b % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (b % 3 == 0)
	{
	printf("F
			izz");
	}
	else if (b % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", b);
	}
	if (b != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);

}
