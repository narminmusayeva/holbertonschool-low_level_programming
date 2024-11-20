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
if (str == NULL)
{
return (NULL);
}
arr = (char *)malloc(strlen(str) + 1);
if (arr == NULL)
{
return (NULL);
}
strcpy(arr, str);
return (arr);
}
