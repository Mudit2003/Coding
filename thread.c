#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

void * threadFunction(void* arg);
int i , n , j ; 

int main(){

	pthread_t a_thread;
	
	pthread_create(&a_thread , NULL , threadFunction , NULL);
	//pthread_join(a_thread , NULL);


	printf("Inside main program\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d\n" , i);
		sleep(1);
	}

}

void * threadFunction(void* arg){
	printf("Inside Thread\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("thread:%d\n" , i);
		sleep(1);
	}
}
