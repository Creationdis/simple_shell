#include "shell.h"

/**
 * get_string_length - Calculates the length of a string.
 * @str: Pointer to the string.
 * Return: The length of the string.
 */

int get_string_length(char *str)
{
int length = 0;

while (*str != '\0')
{
str++;
length++;
}

return (length);
}

