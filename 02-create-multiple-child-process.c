#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int i;

	for(i=1; i<=4; i++)
	{
		pid_t pid = fork();

		if (pid == 0) {
			printf("Child process => PPID=%d, PID=%d\n",getppid(),getpid());
			exit(0);
		}
		else {
			printf("Parent process => PID=%d\n",getpid());
			printf("Waiting for child process to finish...\n");
			wait(NULL);
			printf("Child process is finished\n");
		}
	}

	return EXIT_SUCCESS;
}
