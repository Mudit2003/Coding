// msgget(): creates the message queue||msgsnd():add a message to the messege queue||msgrcv():to retrive the message from the message queue.||msgctl(): the control function to delete the message queue.

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>

#define MAX_TEXT 50 // MAXIMUM SIzE(any) OF THE MESSAGE THAT CANN BE WRITTEN IN THE MQ

struct my_msg
{
    long int msg_type;
    char some_text[MAX_TEXT];
};

int main()
{
    int running = 1; // true flag
    int msgid;
    struct my_msg some_data;
    char buffer[20];

    msgid = msgget((key_t)12345, 0660 | IPC_CREAT);

    if (msgid == -1)
    {
        printf("error");
    }

    while (running) // if following value are true then this while will work properly
    {
        printf("Enter some text:\n");

        fgets(buffer, 20, stdin);
        some_data.msg_type = 1;
        strcpy(some_data.some_text, buffer);

        if (msgsnd(msgid, (void *)&some_data, MAX_TEXT, 0) == -1)
        {
            printf("msg is not sent");
        }
        if (strncmp(buffer, "end", 3) == 0)
        {
            running = 0;
        }
    }
}