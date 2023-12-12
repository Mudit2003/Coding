    #include<stdio.h>
    #include<unistd.h>
    #include<sys/types.h>
    #include<sys/stat.h>

    int main(){

        int res , n ; 

        res = mkfifo("fifo1" , 0777);
        printf("Named Pipe created , %d\n\t" , res);

        return 0; 
    }
