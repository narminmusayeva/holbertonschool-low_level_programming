#include <stdio.h>
/*
*main - entry point of program that wrie prints the alphabet in lowercase,exluding 'q' and 'e'
*return: always 0 (success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'q' && c != 'e')
putchar(c);
}
putchar('\n');
return (0);
}
