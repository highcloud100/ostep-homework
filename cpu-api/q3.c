#include <stdio.h>
#include <unistd.h>

int main(){
    if(fork()==0){
        printf("hello~\n");
    }
    else{
        sleep(0);
        printf("good bye~~\n");
    }
}