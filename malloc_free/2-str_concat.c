#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: New concatenated string or NULL.
 */
char *str_concat(char *s1, char *s2)
{
char *arr;
int i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
arr = (char *)malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
if (arr == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
{
arr[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
arr[i + j] = s2[j];
}
arr[i + j] = '\0';
return (arr);
}
