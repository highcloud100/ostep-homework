#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){
    char *data = "parent\n";
    int fd = open("./test.txt", O_RDWR);
    if(fork()){
        char * child = "child\n";
        write(fd, child, strlen(child));
    }
    else{
        write(fd, data, strlen(data));
    }
}