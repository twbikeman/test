#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>


int main() {
  pid_t pid;
  for (int i = 0; i < 1; i++) {
    pid = fork(); // create child 1
      if(pid != 0) {
	pid = fork(); // create child 2
	if(pid != 0) {
	  printf("pid is %d; ppid is %d\n", getpid(), getppid());
	  wait(NULL);
	  wait(NULL);
	  exit(0);
	}
	else { //child #2
	  printf("pid is %d; ppid is %d\n", getpid(), getppid());	  
	}
      }
      else { //chilid # 1
	printf("pid is %d; ppid is %d\n", getpid(), getppid());	  
      }
  }

  return 0;
}
