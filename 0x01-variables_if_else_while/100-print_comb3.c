#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{

	int w, q;

	for (w = '0'; w < '9'; w++)
	{

	for (q = w + 1; q <= '9'; q++)
	{
	if (q != w)
	{
	putchar(w);
	putchar(q);
	if (w == '8' && q == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}


