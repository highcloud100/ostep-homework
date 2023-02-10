#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(){
    int fd[2];
    pipe(fd);

    if(fork()==0){
        char* data = "hello?";
        write(fd[1],data, strlen(data)); 
        printf("send\n");
        return 0;
    }
    else wait(NULL);

    if(fork()==0){
        char data[20];
        read(fd[0], data, 10);
        printf("read: %s\n", data);
        return 0;
    }
    wait(NULL);
    printf("end\n");

    int child1 = fork();
    int child2 = fork();
}