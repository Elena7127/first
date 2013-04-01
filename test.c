#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc,char *argv[],char *envp[])
{

extern char **environ;
 int fd[2];
  if(pipe(fd)<0){
    printf("!!!!!!");
    return 1;
 }
  int pid = fork();
  // char descriptor[2];
  if(pid < 0){
    printf("error");
  } else if(pid == 0){
    FILE *ofs=NULL;
    ofs = fopen("child1.txt","wt");
    fprintf(ofs, "%d %d\n", pid, getpid());
    execle("/usr/bin/env", "/usr/bin/env", 0, envp);
    write(fd[1], "hello", 6); 
    close(fd[1]);
  }
  else{
    char exp[6];
    int i=0;
    printf("parent %d %d\n", pid, getpid());
    while(1){
      if( read(fd[0], exp[i],1)==0)i++;
      else
          break;
    }
    close(fd[0]);
  }
  return 0;
} 
