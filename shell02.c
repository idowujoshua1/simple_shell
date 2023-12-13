#include "main.h"
#include <string.h>

int main(int argc, char **argv, char **envp)
{
	char *argv[] = {"ls", "-la", NULL};
	int i;

	for (i = 0; envp[i] != NULL; i++)
	{
		if (strncmp(envp[i], "PATH", 4) == 0)
		{
			printf("%s", envp[i]);
		}
		/*printf("%s\n", environ[i]);*/
	}

	/*printf("initial execution\n");*/
	/*
	 * if (execve("/usr/bin/ls", argv, NULL) == -1)
	 * {
	 *	perror("Error:");
	 * }
	*/
	/*
	 * printf("Final execution\n");
	 * return (0);
	 */

}
