// #include<stdio.h>
// #include<math.h>
// void merge(int* arr , int beg  , int mid , int end );
// void mergeSort(int* arr , int beg , int end );

// int main(void){
//     int array[]={8,7,6,5,4,3,2,1};
//     mergeSort(array , 0 , 7);
//     for (int i = 0; i <= 7; i++)
//     {
//         printf("%d\n" , array[i]);
//     }
    
//     return 0 ; 
// }

// void mergeSort(int* arr , int beg , int end ){
//     if(beg>=end)return ; 
//     int mid = (int)(beg+end)/2 ; 
//     mergeSort(arr , beg , mid);
//     mergeSort(arr , mid+1 , end);
//     merge(arr , beg , mid , end);
// }

// void merge(int * arr , int beg , int mid , int end ){
//     int left[mid-beg+2] , right[end-mid+1] ; 
//     int i = 0 ; 
//     for( ; i <= mid-beg ; i++){
//         left[i]=arr[beg+i]; 
//     }
//     for(int j = 0 ; j <= end-mid-1 ; j++ ){
//         right[j]=arr[mid+1+j];
        
//     }
//     left[mid-beg+1]= __INT_MAX__ , right[end-mid]=__INT_MAX__; 
//     int* ptrL = left , *ptrR =right;
//     while(beg<=end){
//         if(*ptrL < *ptrR ){
//             arr[beg]=*ptrL ; 
//             ptrL++;
//         }
//         else{
//             arr[beg]=*ptrR;
//             ptrR++; 
//         }
//         beg++;
//     }
   
    
// }

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

void display(int* array , int beg , int end){
    for(int i=beg ; i<=end ; i++)
    printf("Array[%d]:%d\n",i,array[i]);
}
 void merge(int arr[], int beg , int mid , int end){
        int l = mid-beg+1 ; 
        int r = end-mid;
        int left[l],right[r];
        for(int i=0 ; i < l ; i++)
           left[i] = arr[beg+i];
        
        for(int i=0 ; i<r ; i++)
            right[i]=arr[mid+1+i];
        
        int lp=0 , rp=0 , count=beg ; 
        while(lp<l&&rp<r&&count<=end)
        if(left[lp]<right[rp])
        arr[count++]=left[lp++];
        else
            arr[count++]=right[rp++];
        
        while(lp<l)
        arr[count++]=left[lp++];
        while(rp<r)
        arr[count++]=right[rp++];
        
    }
    void mergeSort(int A[] , int beg , int end){
        if(beg>=end)return ;
        int mid = beg + (end-beg)/2;
        mergeSort(A,beg,mid);
        mergeSort(A,mid+1,end);
        merge(A,beg,mid,end);
    }

    int main()
    {
        int arr[]={9,8,7,6,5,4,3,2,1};
        int n= sizeof(arr)/sizeof(int);
        mergeSort(arr,0,n-1);
        display(arr,0,n-1);
        return 0;
    }
    