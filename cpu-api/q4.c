#include <stdio.h>
#include <unistd.h>

int main(){
    if(fork()==0){
        execl("/bin/ls","/bin/ls", NULL);
    }
    else printf("parent\n");
}