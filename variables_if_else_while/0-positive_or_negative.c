#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n < 0)
{
printf("%d is %s\n", n, "negative");
}
else if (n > 0)
{
printf("%d is %s\n", n, "positive");
}
else
{
printf("%d is %s\n", n, "zero");
}
return (0);
}
