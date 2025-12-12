#include <stdio.h>
#include <unistd.h>

int main(){

	pid_t pid,getid;
	getid=getpid();
	printf("%s %d \n","Process ID:",getid);
	pid=fork(); //Eger fork basarili olursa program ust satirdan sonra bir kez daha calisacak
	printf("%s %d \n","Fork(Child) PID:",pid );
	return 0;
}
