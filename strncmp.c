#include "shell.h"

/**
 * our_strncmp - compare two strings up to a given index
 * @first_str: first string
 * @second_str: second string
 * @index: index to compare up to
 * Return: 0 if strings are equal up to the given index, -1 otherwise
 */
int our_strncmp(char *first_str, char *second_str, int index)
{
int i = 0;

while (i < index)
{
if (first_str[i] != second_str[i])
return (-1);
i++;
}

return (0);
}

