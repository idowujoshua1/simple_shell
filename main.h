#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

void show_prompt(void);
char *receive_input(char *command_line_input);
char **tokenize_command(char *command, int arg_count);
void execute_command(char **tokens, char **env_variable);

#endif
