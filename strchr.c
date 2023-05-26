#include "shell.h"

/**
 * _strchr - function locates a character in a string
 * @str: checked string
 * @c: located character
 * Return: pointer to the first occurrence
 * or NULL if the character is not found
 */

char *_strchr(char *str, char c)
{
while (*str)
{
if (*str == c)
return (str);
str++;
}
if (!c)
return (str);
return (NULL);
}
