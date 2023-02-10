#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main(){
    int status;
    if(fork()==0){
        printf("자식 PID : %ld \n",(long)getpid());
        wait(NULL);
        //sleep(5);
        
        printf("자식 종료\n");
        
    }
    else{

        pid_t w = wait(&status);

        if(w == -1){
            printf("에러 넘버: %d\n", errno);
            perror("오류 반환");
        }
        printf("부모 종료 %d %d\n",w,WTERMSIG(status));
    }
} // https://kldp.org/node/2234
  // https://codetravel.tistory.com/30