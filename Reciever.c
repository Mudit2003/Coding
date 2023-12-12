#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int main(){
    int res , n ; 
    char buff[100];
    res = open("fifo1" , O_RDONLY);
    n = read(res , buff , 100);

    printf("Reader Process: PID= %d sent data\n" , getpid());
    printf("Data recieved by PID + %d = %s \n" , getpid() , buff);

    return 0; 
}