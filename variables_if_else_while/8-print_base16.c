#include <stdio.h>
/**
 * main - entry point of the program
 *
 * Description: Prints all the numbers ofbase 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char c;
for (c = '0'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
