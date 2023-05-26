#include "shell.h"

/**

* print_string - Prints a string.
* @str: The string to be printed.
*/
void print_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
