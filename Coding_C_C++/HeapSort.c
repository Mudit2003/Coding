#include<stdio.h>
#include<stdlib.h>

int insertHeap(int* heap , int element , int n );
void insertHeapify(int* , int);
int deleteHeap(int* , int , int);
void deleteHeapify(int* , int , int);
void display(int * array , int n);
void heapSort(int* array , int n )

int main(void){
    int* array , size ; 
    printf("SizeofArray:");
    scanf("%d" , &size);
    array = (int*)malloc(sizeof(int)*size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d" , array+i);
    }
    array = heapSort(array,n);
    display(array , size);
    return 0 ; 
}

int* heapSort(int* array , int n){
    int heap[size] , n=0 ; 
    for (int i = 0; i < size; i++)
    {
        n = insertHeap(heap , array[i] , n);
        // printf("%d\n" ,heap[i]);
    }

    while(n){
        int temp = deleteHeap(heap , 0 , n);
        printf("%d ",temp);
        n--;
        heap[n]= temp ; 
    }
    return heap ; 
    }

void display(int * array , int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d " , array[i]);
    }
    printf("\n");
    
}

int insertHeap(int* heap , int element , int n ){
    heap[n]=element;
    insertHeapify(heap , n);
    n++ ; 
    return n ; 
}

void insertHeapify(int* heap , int index){
    if(index<=0)return ; 
    int par = (index - 1)/2 ; 
    if(heap[index]>heap[par]){
        int temp = heap[index];
        heap[index]=heap[par];
        heap[par]=temp ; 
        index = par ; 
        insertHeapify(heap , index);
    }
}


int deleteHeap(int* heap , int index , int n ){
    int temp = heap [index];
    n--; 
    heap[index] = heap[n];
    deleteHeapify(heap , index , n );
    return temp ; 
}

void deleteHeapify(int* heap , int root , int n){
    if(root>=n/2) return ; 
    int left = root*2+1 , right = root*2+2 ; 
    int largest = root ;
    if(left<n && heap[left]>heap[largest])
    largest = left ; 
    
    if(right<n && heap[right]>heap[largest]) 
    largest = right ; 
    
    if(largest!=root){
        int temp = heap[largest];
        heap[largest]=heap[root];
        heap[root]=temp ; 
        deleteHeapify(heap , largest , n);
    }
}
