// program to create two threads to show race condition. one thread tries to increment another tries to decrement the shared variable.Change the order of the threads running and see what happens with the value of shared variable.
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
void *fun1();
void *fun2();
int shared = 1; // shared var

int main()
{
    pthread_t thread1, thread2; // thread declaration

    pthread_create(&thread1, NULL, fun1, NULL); // thread created
    pthread_create(&thread2, NULL, fun2, NULL); // thread created
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    printf("THE FINAL VALUE OF SHARED IS %d\n", shared); // prints the last updated value
}

void *fun1()
{
    int x;
    x = shared;
    printf("thread1 local updation x as %d\n", x);
    x++;
    sleep(1);
    shared = x;
    printf("value updated to shared by T1 is %d\n", shared);
}

void *fun2()
{
    int y;
    y = shared;
    printf("thread2 local updationx as %d\n", y);
    y--;
    sleep(1);
    shared = y;
    printf("value updated to shared by T2 is %d\n", shared);
}