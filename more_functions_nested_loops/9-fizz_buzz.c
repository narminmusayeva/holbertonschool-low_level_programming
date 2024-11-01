#include <stdio.h>
/**
 * main - Runs the FizzBuzz program
 *
 * Prints numbers from 1 to 100.
 * For multiples of 3, prints "Fizz" instead of the number,
 * for multiples of 5, prints "Buzz",
 * and for numbers that are multiples of both 3 and 5, prints "FizzBuzz".
 *
 * Return: Returns 0 on successful completion.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 15 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
putchar ('\n');
return (0);
}
