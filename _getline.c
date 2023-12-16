#include "shell.h"
#include <sys/types.h>

int main(void)
{
	char *lineptr = NULL;
	size_t n;
	ssize_t _getline;
	char *token;
	char *cmd_args[10];

	while (1)
	{
		printf("$: ");
		_getline = getline(&lineptr, &n, stdin);
		if (_getline == EOF || _getline == -1)
		{
			free(lineptr);
			exit(0);
		}
		int i = 0;
		token = strtok(lineptr, " \n\t");

		while(token != NULL && i < 10)
		{
			cmd_args[i] = strdup(token); /*Populate the array with the tokens*/
			token = strtok(NULL, " \n\t");
																								i += 1;
		}
		cmd_args[i] = NULL;
																							int j;
																							for (j = 0; j < 10; j++)
		{
			printf("%s\n", cmd_args[j]);
			free(command_args[j]);
		}
	}
	free(lineptr);
	return (0);
}
