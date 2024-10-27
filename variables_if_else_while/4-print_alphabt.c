#include <stdio.h>
/**
* main - Prints the alphabet in lowercase, excluding 'q' and 'e'
* Description: This program uses a loop to print each lowercase letter
* except 'q' and 'e', followed by a newline.
* Return: Always 0 (Success)
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
