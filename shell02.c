#include "main.h"
#include <string.h>

int main()
{
	extern char **environ;

	char *argv[] = {"ls", "-la", NULL};
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		if(strncmp(environ[i], "PATH", 4) == 0)
		{
			printf("%s",environ[i]);
		}
		//printf("%s\n", environ[i]);
	}
	
	
	
	
	/* printf("initial execution\n");
	if (execve("/usr/bin/ls", argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("Final execution\n");
	return (0);*/

}
