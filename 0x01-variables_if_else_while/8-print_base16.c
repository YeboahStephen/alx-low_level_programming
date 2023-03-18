#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Always 0 (Success)
 */


int main(void)

{

	int q;
	char low;

	for (q = '0'; q <= '9'; q++)
	putchar(q);

	for (low = 'a'; low <= 'f'; low++)
	putchar(low);
	putchar('\n');

	return (0);
}
