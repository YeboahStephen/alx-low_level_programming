#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 * main - print if number is positive, zero or negative
 * Return: Alawys (Success)
 *
 */

int main(void)
	
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	eslse if (n == 0)
	{
	printf("%d iszero\n", n);
	}
	eslse
	{
	printf("%d is negative\n", n);
	}
	return (0);
}

