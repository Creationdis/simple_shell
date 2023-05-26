#include "shell.h"

/**
 * _strcmp - function comparing two strings
 * @varname: name of first string
 * @dirname: name of second string
 *
 * Return: difference between varname and dirname
 */
int _strcmp(char *varname, char *dirname)
{
int x = 0, output;

while (*(s1 + i) == *(dirname + x) && *(varname + x) != '\0')
x++;

output = (*(varname + x) - *(dirname + x));

return (output);
}
