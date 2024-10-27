#include <stdio.h>
/*
 * main - Entry point of the program
 * Description: Print numbers from 0 to 9 using puthcar
 * return: always 0 (success)
 */
int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
putchar(c);
putchar('\n');
return (0);
}
