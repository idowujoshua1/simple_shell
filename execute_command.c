#include "main.h"

/**
* execute_command - executes new program
* @tokens: pointer to tokenized string
* @executable_file: full path to executable command
*/

void execute_command(char **tokens, const char *executable_file)
{
pid_t command_pid;
int i, child_process, status;
int j = 0;

command_pid = fork();

printf("The id of the child is %d\n", command_pid);

if (command_pid == 0)
{
printf("Command: %s\n", tokens[0]);
for (i = 0; tokens[i] != NULL; i++)
{
printf("Argument %d: %s\n", i, tokens[i]);
}

while (environ[j] != NULL)
{
printf("%s\n", environ[j]);
j++;
}
printf("Executable file: %s\n", executable_file);
child_process = execve(executable_file, tokens, environ);

if (child_process == -1)
{
printf("Error: command not found\n");
exit(EXIT_FAILURE);
}
}
else if (command_pid < 0)
{
perror("fork");
exit(EXIT_FAILURE);
}
else
{
wait(&status);
}
}
