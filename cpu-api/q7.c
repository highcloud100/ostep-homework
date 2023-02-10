#include <stdio.h>
#include <unistd.h>

int main(){
    if(fork()>0){
        close(STDOUT_FILENO);
        printf("child out\n");
    }
    else printf("parent\n");
} 