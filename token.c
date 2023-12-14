#include "main.h"

int main()
{
	char command[] = "ls -l /bin/usr";

	char *token;
	char *delim = " ";

	token = strtok(command, delim);

	while (token != NULL)
	{
		printf("Tokn: %s\n", token);
		token = strtok(NULL, delim);
	}
	return (0);
}
