#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	fork();

	printf("the process is created using fork() system call\n");

	return 0;
}
