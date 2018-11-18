#ifndef ATHENA_H
#define ATHENA_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <dirent.h>

extern char **environ;

int _strlen(char *s);
char *getpath(void);
void print_wd(void);
void summon_child(char **argument);
void print_curr_env(void);
char *_getenv(const char *name);
void rev_string(char *s);
void *_itoa(int n, char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char **split_string(char *line, char *delim);
char *prompt_getline(void);
int _strcmp(char *s1, char *s2);
#endif
