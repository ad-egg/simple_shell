#ifndef SHELL_H
#define SHELL_H
#define _XOPEN_SOURCE 700
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "signal.h"
extern char **environ;

/**
 * struct path - linked list of environment variables
 * @ptr: pointer to environment variable string
 * @next: points to next node in linked list
 */
typedef struct path
{
	char *ptr;
	struct path *next;
} path_t;

/* entry point */
int main(int argc, char **argv);

/* input */
void egg(char *snail);
char *read_line(void);
char **split_line(char *buffer, char *del);
int execute_shell(char **args, char *snail);

/* path functions */
path_t *path_gen(void);
char *path_check(path_t *head, char *input);
char *path_cat(char *s1, char *s2);

/* built in functions*/
int isit_built(char **args, char *input);
void shell_exit(char **args, char *input);
void print_enviornment(void);

/* enviornment funcitons */
path_t *_env(void);
char *env_find(char *var);
int env_match(char *input);
void env_start(char *str, char *value);

/* string tokenize functions*/
int ayto(char z, const char *delim);
char *_strtok(char *input, const char *delim);
char **split_line(char *buffer, char *delim);
int word_count(char *str);

/* execution */
int cmp_exec(char **args, char *eggs);
int fork_exec(char **args, char *snail);

/* functions that free */
void pth_free(path_t *head);
void env_free(path_t *head);

/* string functions */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_itoa(int num);
int _numlen(int n);
char *_strcpy_src(char *dest, char *src, int n);
void _puts(char *str);
/* variables */
path_t *the_path;
path_t *enviornment;
int line_count;
void *_realloc(void *ptr, unsigned int before, unsigned int after);
void errenous(char **args, char *cmd, int errno);
void sig_handler(int sig_handler);
/*ssize_t getline(char **lineptr, size_t *n, FILE *stream);*/
int find_match(const char *s1, char *s2);
char *_getenv(const char *name);
char *getpath(void);
#endif
