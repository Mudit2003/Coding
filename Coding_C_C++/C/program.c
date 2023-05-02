#include <stdio.h>

int main(void)
{
    int array[]={7,9,12,23,23,45,23};
    int x=sizeof array;
    int y=sizeof array[0];
    printf("%d" ,x/y);
    return 0;
}
