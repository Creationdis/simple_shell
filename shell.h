#ifndef SHELL_H
#define SHELL_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <signal.h>
#include <sys/wait.h>
#include <limits.h>
#include <ctype.h>

#define DELIM " \t\r\n\a"
#define BUFSIZE 1024
#define MAX_ARGS 10

/* Function prototypes */

int find_substring(char *string, char *substring);
char *tokenize_string(char *str, char *delim);
int get_string_length(char *str);
char *string_concatenate(char *destination, char *source);
int compare_strings(char *str1, char *str2);
char *copy_string(char *destination, char *source);
char *find_character(char *s, char c);
void *set_memory(void *ptr, int value, size_t size);
void reverse_string(char *str, int length);
char *convert_to_string(unsigned int num);
int get_number_length(unsigned int number);
extern char **environ;

#endif /* SHELL_H */

