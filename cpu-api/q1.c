#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int x = 100;
	if(fork()){
		printf("%d parent\n", x);
	}
	else printf("%d, child\n", x);
}
