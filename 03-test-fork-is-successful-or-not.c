#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void child() {
	printf("Child processis created by fork() system call\n");
}

void parent() {
	printf ("Parent process is created by fork() system call\n");
}

int main(void)
{
	pid_t p = fork();

	if (p == 0)
	{
		child();
		exit(EXIT_SUCCESS);
	}
	else if (p > 0) {
		wait(NULL);
		parent();
	}
	else {
		printf("fork() is unable to create child process\n");
	}

	return EXIT_SUCCESS;

}
