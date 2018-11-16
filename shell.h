#ifndef SHELL_H

#define SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

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

/* path functions */
path_t path_gen(void);

/* enviornment funcitons */
path_t env(void);
path_t env_finder(void);
int env_match(char *input);
void env_start(char *str, char *value);

/* string tokenize functions*/
int ayto(char z, const char *input);
char *_strtok(char *input, const char *delim);
char **split_line(char *buffer, char *del);
int word_count(char *str);

/* execution */
int cmp_exec(char **args, char *eggs);
int fork_exec(char **args, char *turtle);

/* string functions */
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);

void sig_handler(int sig_handler);
#endif
