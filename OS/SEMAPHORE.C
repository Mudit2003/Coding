/*sem_t: data type to declare semaphore variable;sem_init():initializes semaphore variable;sem_wait():it checks the critical section is free or not before getting inside the critical section;sem_post(): objective is same as signal() in theory */
// you have to synchronise two threads/processes using semaphore i.e. the final value of the shared variale should be 1 at the end which was not the case in case of race condition.
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

void *fun1();
void *fun2();

int shared = 1; // shared var
sem_t s;		// semaphore variable

int main()
{
	sem_init(&s, 0, 1); // initialise semaphore variable

	pthread_t thread1, thread2;					// thread declaration
	pthread_create(&thread1, NULL, fun1, NULL); // thread created
	pthread_create(&thread2, NULL, fun2, NULL); // thread created
	pthread_join(thread1, NULL);				// PROCESS WAITS FOR THREAD TO FINISH.COMMENT THIS LINE TO SEE THE DIFFERENCE.IT IS RETURNING NOTHING TO MAIN HERE SO NULL.
	pthread_join(thread2, NULL);
	printf("THE FINAL VALUE OF SHARED IS %d\n", shared); // prints the last updated value
}

void *fun1()
{
	int x;
	sem_wait(&s); // execute wait operation pon s
	x = shared;
	printf("thread1 local updation x as %d\n", x);
	x++;
	sleep(1);
	shared = x;
	printf("value updated to shared by T1 is %d\n", shared);
	sem_post(&s); // performs signal
}

void *fun2()
{
	int y;
	sem_wait(&s);
	y = shared;
	printf("thread2 local updationx as %d\n", y);
	y--;
	sleep(1);
	shared = y;
	printf("value updated to shared by T2 is %d\n", shared);
	sem_post(&s);
}
