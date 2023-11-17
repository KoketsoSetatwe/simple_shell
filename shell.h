#ifndef SHELL_H
#define SHELL_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <dirent.h>
#include <signal.h>
#include <unistd.h>
#include <fcntl.h>

/* global variables */
extern char **environ;

int is_delim(char c, char *delimiters);

#endif
