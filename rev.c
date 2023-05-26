#include "shell.h"

/**
 * reverse_string - Reverses a given string.
 * @str: The string to be reversed.
 * @length: The length of the string.
 * Return: None.
 */

void reverse_string(char *str, int length)
{
char temp;
int start = 0;
int end = length - 1;

while (start < end)
{
temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
