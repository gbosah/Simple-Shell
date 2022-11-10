#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void show_prompt(void);
char *read_input(void);
char **_strtok(char *buf);
void execute(char **tokens, char **environment);
int _strlen(char *str);
char *_strdup(char *str);
#endif /*SHELL_H*/
