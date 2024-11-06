#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 *
 * Return: Pointer to the first occurrence of c in s, or NULL if not found.
 */

char *_strchr(char *s, char c)
{
char *p = strchr(s, c);
if (p != NULL)
{
printf("String starting from %c is : %s\n", c, p);
}
else if (p == NULL)
{
printf("Character '%c' not found in the string", c);
}
else
{
printf("Character '%c' not found in the string.\n", c);
}
return (p);
}
