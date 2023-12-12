#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    int res , n ; 
    res = open("fifo1" , O_WRONLY);

    write(res , "message" , 7);
    printf("Sender Process: PID = %d sent data\n" , getpid());

    return 0 ; 
}