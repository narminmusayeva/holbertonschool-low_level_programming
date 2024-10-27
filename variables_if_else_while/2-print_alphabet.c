#include <stdio.h>
/**
* main - Program entry point that prints the alphabet in lowercase
*
* Description: Uses a loop to print each letter of the alphabet
* in lowercase, followed by a newline.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
