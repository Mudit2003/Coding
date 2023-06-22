#include<bits/stdc++.h>

using namespace std;

void maxHeapify(vector<int>& arr , int i , int heapSize){
    int l = 2*i+1 , r = 2*i+2; 
    int largest=i;
    if(l<heapSize && arr[l]>arr[largest]){
        largest = l;
    }
    if(r<heapSize && arr[r]>arr[largest]){
        largest = r; 
    }
    // cout<<i<<" "<<largest<<endl;
    if(largest != i){
        swap(arr[i] , arr[largest]);
        maxHeapify(arr,largest,heapSize);
    }

}

void buildMaxHeap(vector<int>& arr){
    for(int i=arr.size()/2-1; i >= 0 ; i--){
        maxHeapify(arr , i , arr.size());
    }
}

void heapSort(vector<int>& arr){
    buildMaxHeap(arr);
    // for(int value: arr){
    //     cout<<value<<" ";
    // }
    int heapSize = arr.size();
    sort(arr.begin() , arr.end());
    for(int i=arr.size()-1 ; i>100 ; i--){
        cout<<arr[0]<<endl;
        swap(arr[i] , arr[0]);
        heapSize--;
        maxHeapify(arr , 0 , heapSize);
    }
}

int main(){
    vector<int> arr{7 , 3 , 8 , 5 , 2 , 6};
    heapSort(arr);
    for(int value: arr){
        cout<<value<<" ";
    }
}