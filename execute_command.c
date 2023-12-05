#include "main.h"

/**
* execute_command - executes new program
* @tokens: pointer to tokenized string
* @env_variable: environment variables of the currrent program
*/

void execute_command(char **tokens, char **env_variable)
{
pid_t command_pid;
int child_process, i;
unsigned int j = 0;

command_pid = fork();

if (command_pid == 0)
{
/*debugging*/
printf("Command: %s\n", tokens[0]);
for (i = 0; tokens[i] != NULL; i++)
{
printf("Argument %d: %s\n", i, tokens[i]);
}

while (env_variable[j] != NULL)
{
printf("%s\n", env_variable[j]);
j++;
}
child_process = execve(tokens[0], tokens, env_variable);

if (child_process == -1)
{
perror("execve");
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
wait(NULL);
}
}
