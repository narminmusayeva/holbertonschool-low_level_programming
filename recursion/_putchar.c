#include <unistd.h>

/**
 * _putchar - writes a character to standard output
 * @c: The character to print
 *
 * Return: On success, return 1. On error, return -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}

