#include <stdio.h>
/*
 * main - prints numbers from 0 to 9
 * return : always 0 (success)
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
putchar(c);
putchar('\n');
return (0);
}
