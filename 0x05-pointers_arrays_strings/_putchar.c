#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The Character to print
 * Return: On success 1.
 * On error, -1 is returned and errnois set opportunity.
 */

int _putchar(char c)

{

        return (write(1, &c, 1));
}
