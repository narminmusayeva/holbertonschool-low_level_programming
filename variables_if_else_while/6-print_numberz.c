#include <stdio.h>
/*
 * main - Entry point of the program
 * Description: Print numbers from 9 to 0
 * return: always 0 (success)
 */
int main(void)
{
int c;
for(c = '0'; c <= '9'; c++)
putchar(c);
putchar('\n');
return (0);
}