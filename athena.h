#ifndef ATHENA_H
#define ATHENA_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys.stat.h>
#include <fcntl.h>
#include <errno.h>

void rev_string(char *s);
char *itoa(int n, char *s);
#endif
