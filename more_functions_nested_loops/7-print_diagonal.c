#include "main.h"
/**
 * print_diagonal - print \ or line
 * _putchar: print dioganal simvol or straight line
 * @n:The number of underscores to be printed.
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar ('\n');
return;
}
else
{
_putchar ('\\');
_putchar ('\n');
_putchar (' ');
_putchar ('\\');
_putchar ('\n');
_putchar (' ');
_putchar (' ');
_putchar ('\\');
_putchar ('\n');
}
}
