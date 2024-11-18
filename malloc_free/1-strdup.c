#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Copies a string to newly allocated memory
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string or NULL if failed
 */
char *_strdup(char *str)
{
char *arr;
int i;
if (str == NULL)
{
return (NULL);
}
arr = (char *)malloc(sizeof(char) * (strlen(str) + 1));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
arr[i] = str[i];
}
arr[i] = '\0';
return (arr);
}
