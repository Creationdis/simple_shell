#include <stdio.h>
#include "shell.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int n1;
int n2;
int result;

printf("please enter a number: ");
scanf("%d", &n1);

printf("please enter another number: ");
scanf("%d", &n2);

result = n1 + n2;
printf("%d\n", result);

return (0);
}
