#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

#define CHILD 0

int main()
{
	pid_t childPid;                 // The pid_t data type is a signed integer type which is capable of representing a process ID.
                                        //   In the GNU C Library, this is an int

        childPid = fork();              // fork creates child process (new process mens child process)

        printf("hello fork %d\n", getpid());

        if (childPid == CHILD) {
                printf("child: My pid = %d and ppid = %d\n", getpid(),
                       getppid());
                sleep(10);
                while (1) ;
        } else {
                printf("PARENT :pid = %d\n", getpid());
                while (1) ;
                sleep(10);
        }


        return 0;

}
