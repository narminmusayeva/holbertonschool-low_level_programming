/*
* File: 1-last_digit.c
* Auth: Brennan D Baraban
*/
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Program entry point that determines the last digit of a random number
* Description: Generates a random number and prints whether the last digit
* is greater than 5, is 0, or is less than 6 and not 0.
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if ((n % 10) > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and is 0\n", n, n % 10);
}
return (0);
}
