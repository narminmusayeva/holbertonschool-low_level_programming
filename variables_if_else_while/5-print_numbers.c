#include <stdio.h>
/**
* main - Entry point of the program
*
* Description: Prints numbers from 0 to 9 followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
putchar(c);
putchar('\n');
return (0);
}
