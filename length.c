#include "shell.h"

/**
 * get_string_length - Calculate the length of a string.
 * @str: A pointer to the string.
 *
 * Description: This function returns the length of a string.
 *
 * Return: The length of the string.
 */

int get_string_length(char *str)
{
int length = 0;

while (*str != '\0')
{
length++;
str++;
}

return (length);
}
