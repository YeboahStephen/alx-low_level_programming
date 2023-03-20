#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 * Return: Alwayd 0 (Success)
 */


int main(void)

{

	int a, s, d;

	for (a = '0'; a < '9'; a++)
	{

	for (s = a + 1; s <= '9'; s++)
	{

	for (d = s + 1; d <= '9'; d++)
	{
	if ((s != a) != d)
	{
	putchar(a);
	putchar(s);
	putchar(d);
	if (a == '7' && s == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
