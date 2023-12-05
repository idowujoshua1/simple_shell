#include "main.h"

/**
* tokenize_command - tokenizes the command line argument
* @command: pointer to the input command
* @arg_count: number of arguments typed by the user
* Return: pointer to tokenized string
*/

char **tokenize_command(char *command, int arg_count)
{
char **tokens = malloc(arg_count * sizeof(char *));
char *token;
int token_count = 0;

token = strtok(command, " ");
while (token != NULL)
{
/*save tokens*/
tokens[token_count++] = strdup(token);
token = strtok(NULL, " ");
}
tokens[token_count] = NULL;

return (tokens);
}
