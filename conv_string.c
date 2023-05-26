#include "shell.h"

/**
 * convert_to_string - Converts an unsigned integer to a string.
 * @num: The number to be converted.
 * Return: A pointer to the converted string, or NULL on failure.
 */

char *convert_to_string(unsigned int num)
{
int length = 0;
int i = 0;
char *str = NULL;

if (num == 0)
{
str = malloc(2 * sizeof(char));
if (str == NULL)
return (NULL);
str[0] = '0';
str[1] = '\0';
return (str);
}

length = calculate_length(num);
str = malloc((length + 1) * sizeof(char));
if (str == NULL)
return (NULL);

for (i = 0; num != 0; i++)
{
str[i] = (num % 10) + '0';
num /= 10;
}

reverse_string(str, length);
str[i] = '\0';

return (str);
}
