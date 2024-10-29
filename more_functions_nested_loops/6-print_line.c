#include "main.h"
/**
 * print_line - draws a straight line
 * _putchar: print draw a straight or new line
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar ('\n');
return;
}
for (i = 0; i < n; i++)
_putchar ('_');
_putchar ('\n');
}
