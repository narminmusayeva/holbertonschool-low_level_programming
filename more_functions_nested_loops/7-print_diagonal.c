#include "main.h"
/**
 * print_diagonal - print \ or line
 * _putchar: print dioganal simvol or straight line
 * @n:The number of underscores to be printed.
 */
void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar ('\n');
return;
}
for (i = 0; i < n; i++)
_putchar ('\\');
}
