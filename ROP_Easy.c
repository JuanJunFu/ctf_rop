#include <stdio.h>
#include <unistd.h>
#include <string.h>


int main(){
	char buf[35];
	puts("ROP is easy is'nt it ?");
	printf("RIP GY Input :");
	fflush(stdout);
	read(0,buf,88);
	
}
