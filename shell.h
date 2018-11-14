#ifndef SHELL_H
#define SHELL_H

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct path
{
	char *ptr;
	struct path *next;
} path_t;

/* entry point */
int main(int ac, char **av);

/* input */
void egg(char *snail);
char *read_line(void);
char **split_line(char *buffer, char *del);

/* path functions */
path_t path_gen(void);

/* execution */
int cmp_exec(char **args, char *eggs);
int fork_exec(char **args, char *turtle);

#endif
