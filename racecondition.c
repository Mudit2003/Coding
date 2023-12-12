#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

int shared = 0 ; 

void * thread1Method(void* arg);
void * thread2Method(void* arg);

void main(){

	pthread_t thread1 , thread2 ; 

	pthread_create(&thread1 , NULL , thread1Method , NULL);
	pthread_create(&thread2 , NULL , thread2Method , NULL);

	pthread_join(thread1 , NULL);
	pthread_join(thread2 , NULL); 

	printf("Program Completion");
}

void* thread1Method(void* arg){

	int x = shared ; 

	x ++ ; 

	sleep(3);

	shared = x ; 
}

void* thread2Method(void* arg){

	int x = shared; 

	x --; 

	sleep(3);

	shared = x ; 
}
