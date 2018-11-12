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
	char *head;
	struct path *next;
} path_t;

/* string functions */
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
char *_strncat(char *dest, char *src, int n);
char *_itoa(int n);
void _puts(char *str);
int _putchar(char c);

