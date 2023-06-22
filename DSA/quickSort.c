#include<stdio.h>
#include<stdlib.h>

int Quick(int* arr , int beg , int end){
    int left , right , temp , loc ; 
    left = beg , right = end,loc=left; 
    A: while (right!=loc && arr[right]<=arr[loc])
    right-- ; 
    if(right==loc)return loc ;
    else{
      temp = arr[loc];
      arr[loc]=arr[right];
      arr[right]=temp ; 
      loc = right ; 
    }
    while (left!=loc && arr[left]>=arr[loc])
    left++;
    if(left==loc)return loc ; 
    else{
        temp = arr[loc];
        arr[loc]=arr[left];
        arr[left]=temp ;
        loc = left ; 
    }
    goto A ;
}

void QuickSort(int* arr , int beg , int end){
    int left,right,loc,top,upper[10],lower[10]; 
    top = -1 ; 
    lower[++top]=beg ; // 0
    upper[top]=end ;   // 8
    while(top!=-1){
    left = lower[top]; //0
    right = upper[top]; //0
    top--; // -1
    loc=Quick(arr , left , right );
    if(left<loc-1){
        lower[++top]= left , upper[top]=loc-1; 
    }
    if(right>loc+1){
        lower[++top]=loc+1 , upper[top]=right ;
    }
    
    }
}

void display(int* arr , int beg , int end ){
    for(int i=beg ; i <=end ; i++){
        printf("Value:%d\n" ,arr[i]);
    }
}

int main(void){
    int arr[]={1,2,3,4,5,6,7,8,9};
    QuickSort(arr , 0 , 8 );
    display(arr , 0 , 8);
}