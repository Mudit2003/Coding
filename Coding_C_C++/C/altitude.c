#include<stdio.h>

int main(){
    int n;
    printf("What is the total number of points");
    scanf("%d" ,&n);
    int gain[n];
    int altitude[n+1];
    altitude[0]=0;
    for (int i = 0; i < n; i++)
    {
        printf("What is the gain at at altitude%d:" ,i);
        scanf("%d" ,&gain[i]);
        altitude[i+1]=altitude[i]+gain[i];

    }
    int max=altitude[0];
    for (int i = 1; i <= n; i++)
    {
        if(altitude[i]>max)
        {
            int max=altitude[i];
        }
        
    }
    printf("The maximum altitude is %d" ,max);
    
    // Array[][4]={{1,2,3,4},{2,3,4,5},{5,6,7,8}}
    
}