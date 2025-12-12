#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	//pid_t pid; //====int pid
	pid_t pid,ppid;
	pid=getpid();
	ppid=getppid();
	printf("%s %d \n","Process ID:",pid );
	printf("%s %d \n","Parent PID:",ppid );
	return 0;
}