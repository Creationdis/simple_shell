#include "shell.h"

/**
 * _strcmp - function comparing two strings
 * @s1: char
 * @s2: char
 * Return: 1
 */

 int _strcmp(const char *s1, const char *s2)
 {
int i;

for (i = 0; s2[i] != '\0'; i++)
{
if (s2[i] != s1[i])
return (0);
}
return (1);
}
