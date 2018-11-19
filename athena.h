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
#include <signal.h>

extern char **environ;

void printerror(char *arg);
int _strlen(char *s);
char *getpath(void);
void print_wd(void);
void summon_child(char *file, char **argument);
void print_curr_env(void);
char *_getenv(const char *name);
void rev_string(char *s);
char *_itoa(int n);
char **split_string(char *line, char *delim);
char *prompt_getline(void);
int _strcmp(char *s1, char *s2);
#endif
