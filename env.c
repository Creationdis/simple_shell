#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

void env_builtin(char **args)
{
    char **env = environ;
    while (*env)
    {
        printf("%s\n", *env);
        env++;
    }
}

int _strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *(const unsigned char *)s1 - *(const unsigned char *)s2;
}

void _getenv(char **env, int *ex_st)
{
    while (*env)
    {
        printf("%s\n", *env);
        env++;
    }
    *ex_st = 1;
}

void builtins(char *line, char **args, char **env, int *ex_st)
{
    if (_strcmp(args[0], "exit") == 0)
    {
        free(args);
        free(line);
        exit(*ex_st);
    }

    if (_strcmp(args[0], "env") == 0)
        _getenv(env, ex_st);
}

int main(void)
{
    char *line = NULL;
    size_t bufsize = 0;
    ssize_t linelen;
    char **args;
    int ex_st = 0;

    while (1)
    {
        printf("$ ");
        linelen = getline(&line, &bufsize, stdin);
        if (linelen == -1)
        {
            free(line);
            exit(ex_st);
        }

        // Remove newline character
        if (line[linelen - 1] == '\n')
            line[linelen - 1] = '\0';

        // Tokenize the input line
        args = malloc(sizeof(char *) * 10);  // Assuming max 10 arguments
        char *token = strtok(line, " ");
        int i = 0;
        while (token != NULL)
        {
            args[i] = token;
            token = strtok(NULL, " ");
            i++;
        }
        args[i] = NULL;

        // Handle built-in commands
        builtins(line, args, environ, &ex_st);

        free(args);
    }

    return 0;
}

