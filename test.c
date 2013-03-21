#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc,char *argv[])
{
  int pid = fork();
  
  if(pid < 0){
    printf("error");
  } else if(pid == 0){
    FILE *ofs=NULL;
    ofs = fopen("child1.txt","wt");
    fprintf(ofs, "%d %d\n", pid, getpid());
    fclose(ofs);
  }
  else{
    printf("parent %d %d\n", pid, getpid());
  }
  return 0;
} 
