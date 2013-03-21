#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc,char *argv[],char *envp[])
{

extern char **environ;
  int pid = fork();
  
  if(pid < 0){
    printf("error");
  } else if(pid == 0){
    FILE *ofs=NULL;
    ofs = fopen("child1.txt","wt");
    fprintf(ofs, "%d %d\n", pid, getpid());
    execle("/usr/bin/env", "/usr/bin/env", 0, envp);
    fclose(ofs);
  }
  else{
    printf("parent %d %d\n", pid, getpid());
  }
  return 0;
} 
