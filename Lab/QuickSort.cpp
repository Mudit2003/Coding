#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int>& arr , int beg ,int end){
    int pivot = arr[end];
    int i= beg - 1; 
    for(int j=beg; j<end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[j],arr[i]);
        }  
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}

void quickSort(vector<int>& arr , int beg , int end){
    if(beg < end){
        int pivot = partition(arr , beg , end);
        quickSort(arr , beg , pivot-1);
        quickSort(arr , pivot+1 ,end);
    }
}



int main(){
    vector<int> arr{7 , 3 , 8 , 5 , 2 , 6};
    quickSort(arr , 0 , arr.size()-1);
    for(int value:arr){
        cout<<value<<" ";
    }
}