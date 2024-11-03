#include "main.h"
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
int i, c = 0;
char aux;
char *a = s;
while (s[c] != '\0')
{
c++;
}
a = s + c - 1;
for (i = 0; i < (c / 2); i++)
{
aux = s[i];
s[i] = *a;
*a = aux;
a--;
}
}
