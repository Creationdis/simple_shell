#include "shell.h"

/**
 * _strncmp - function comparing two strings up to n bytes
 * @varname: name of first string
 * @dirname: name of second string
 * @n: number of bytes
 *
 * Return: difference between varname and dirname
 */
int _strncmp(char *varname, char *dirname, int n)
{
int j;

for (j = 0; varname[j] && dirname[j] && j < n; j++)
{
if (varname[j] != dirname[j])
return (varname[j] - dirname[j]);
}
return (0);
}
