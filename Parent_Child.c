#include <stdio.h>
#include <unistd.h>

int main(void){

  pid_t pid, getid;
  getid = getpid();
  printf("(Asıl program) PID: %d\n",getid);
  printf("Bu satır asıl program tarafından oluşturuldu.\n\n");

  pid = fork();
  //Eğer fork başarılı olursa program burdan sonra bir kez daha çalışacak

  if(pid == 0){
  //fork() satırı 0 değeri döndürdüyse child processteyiz
  //ve bu if blogu çalışacak.
    getid = getpid(); //child processin PID dönecek
    printf("Child processteyiz.\n");
    printf("Child process PID: %d\n", getid);
  }
  else if(pid == -1){
    printf("Fork Failed\n");
  }
  else{
    getid = getpid(); //Parent processin PID dönecek
    printf("Parent processteyiz.\n");
    printf("Parent process PID: %d\n", getid);
  }
  printf("Fork PID: %d\n\n",pid);
  return 0;
}