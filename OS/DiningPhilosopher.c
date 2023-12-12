#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

sem_t chopstick[5];
void *philos(void *);
void eat(int);
int main()
{

	int i,n[5];
	pthread_t T[5];   
    
     // FIVE THREAD FOR FIVE PHILOSOPHERS
	for(i=0;i<5;i++) //INITIALIZE EVERY SEMEPHORE VARIABLE
	sem_init(&chopstick[i],0,1);
	for(i=0;i<5;i++)  //USED TO CREATE THE FIVE THREADS
	{ 	
		n[i]=i;
		pthread_create(&T[i],NULL, philos, (void *)&n[i]);     // I/P TO FIRST PHIL IS 1, THEM 2 and so on
	}
	for(i=0;i<5;i++) 
	
		pthread_join(T[i],NULL);
}

void * philos(void * n)
{
	int ph =*(int *)n;
	printf("philosopher %d wants to eat\n",ph);
	printf("philosopher %d tries to pick left chopstick\n",ph);
	sem_wait(&chopstick[ph]);
	printf("philosopher %d picks left chopstick\n",ph);
	printf("philosopher %d tries to pick right chopstick\n",ph);
	sem_wait(&chopstick[(ph+1)%5]);
	printf("philosopher %d picks right chopstick\n",ph);
	eat(ph);
	sleep(2);
	printf("philosopher %d has finished eating\n",ph);
	sem_post(&chopstick[(ph+1)%5]);
	printf("philosopher %d leaves right chopstick\n",ph);
		sem_post(&chopstick[ph]);
	printf("philosopher %d leaves left chopstick\n",ph);
}

void eat(int ph)
{	
	printf("philosopher %d begins to eat \n",ph);
}