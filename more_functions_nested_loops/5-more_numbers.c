#include "main.h"
/**
 * more_numbers - print numbers from 0 to 14 ,10 times
 * _putchar:prints numbers
 */
void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar('1');
j %= 10;
}
else
{
_putchar(j + '0');
}
}
_putchar('\n');
}
}
