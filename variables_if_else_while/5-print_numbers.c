#include <stdio.h>
/*
 * main - prints all single digit numbers of base 10 starting from 0
 * return : always 0 (success)
 */
int main(void)
{
char c;
for (c = 0; c <= 10; c++)
putchar(c);
putchar('\n');
return (0);
}
