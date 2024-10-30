#include "main.h"
/**
 * print_square - print # simvol
 * _putchar: print square simvol
 * @size:The number of underscores to be printed.
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
_putchar ('\n');
return;
for (i = 0; i < size; i++)
{
_putchar ('#');
for (j = i; j < i; j++)
_putchar ('#');
_putchar ('\n');
}
_putchar ('\n');
}
