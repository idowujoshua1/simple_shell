#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <errno.h>
#include <dirent.h>

extern char **environ;

void show_prompt(void);
char *receive_input(void);
char **tokenize_command(char *command, const char *delim);
void free_tokens(char **tokens);
char *_getenv(const char *name);
const char *search_path(char *command, char *path_directories);
void execute_command(char **tokens, const char *executable_file);

#endif
