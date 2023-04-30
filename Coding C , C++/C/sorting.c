#include <stdio.h>

 int merge(int array[]);

int main(void){
   

    
    int Array[]={1,7,8,3,4,6,2,5};
    int array_length=sizeof(Array)/sizeof(Array[0]);

   /* 
   // First will try a selection sort 
    
    
    int sorted_array[array_length];
    
    for (int i = 0; i < array_length; i++)
    {
        int sort=Array[i];
       for (int j = 0; j < (array_length); j++)
       {
               if (Array[j]>sort)
            {
                int temp = sort;
                sort=Array[j];
                Array[j]=temp;
                
                
                
            }  
       }
       Array[i]=sort;
    }
       
      
*/       
/*
//Bubble sort 

int swap=-2;

while(swap!=0)
{
    swap=0;
    for (int j = 1; j < array_length; j++)
    {
       
        if (Array[j]<Array[j-1])
        {
            int temp=Array[j];
            Array[j]=Array[j-1];
            Array[j-1]=temp;
            swap++;
        }
        
    }
    
}

    */

// Merge sort 

// What do we want - a terminating condition and a recurring code 


int merge(int array[]){
for (int i = 0; i < ; i++)
{
    /* code */
}


}




 for (int i = 0; i < array_length; i++)
 {
     printf("%d\n",Array[i]);
 }
 
       
    
}
