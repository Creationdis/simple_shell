#include "shell.h"

/**
 * print - print char.
 * @new_str: string.
 *
 * Return: string length.
 **/
int print(char *new_str)
{
int i;

for (i = 0; new_str[i] != '\0'; ++i)
_putchar(new_str[i]);

return (i);
}

