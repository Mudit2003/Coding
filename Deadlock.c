// program to create a Deadlock.Two threads will try to acquire two mutexes.
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void *fun1();
void *fun2();

pthread_mutex_t first_mutex, second_mutex; // variable

int main()
{

    pthread_mutex_init(&first_mutex, NULL); // initialize varibale along with default attributes mentioning NULL
    pthread_mutex_init(&second_mutex, NULL);
    printf("main program\n");
    pthread_t T1, T2;
    pthread_create(&T1, NULL, fun1, NULL); // thread created
    pthread_create(&T2, NULL, fun2, NULL); // thread created
    pthread_join(T1, NULL);
    pthread_join(T2, NULL);
    
    printf("Thread joined and we are inside main program\n");
}

void *fun1()
{
    printf("T1 is trying to acquire the mutext1\n");
    pthread_mutex_lock(&first_mutex);
    printf("T1 acquired the mutext1\n");
    sleep(1);
    printf("T1 is trying to acquire the mutext2\n");
    pthread_mutex_lock(&second_mutex);
    printf("T1 acquired the mutext2\n");
    pthread_mutex_unlock(&second_mutex);
    // pthread_mutex_unlock(&first_mutex);
}

void *fun2()
{
    printf("T2 is trying to acquire the mutext2\n");
    pthread_mutex_lock(&second_mutex);
    printf("T2 acquired the mutext2\n");
    sleep(1);
    printf("T2 is trying to acquire the mutext1\n");
    pthread_mutex_lock(&first_mutex);
    printf("T2 is acquired the mutext1\n");
    pthread_mutex_unlock(&first_mutex);
    // pthread_mutex_unlock(&second_mutex);
}
