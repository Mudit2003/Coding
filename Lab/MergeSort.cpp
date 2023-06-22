#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr , int beg , int mid , int end){
    int l = mid - beg + 1;
    int r = end - mid;
    int left[l+1] , right[r+1];
    for(int i=0 ; i< l ; i++){
        left[i] = arr[beg+i];
    }
    for(int i=0 ; i< r ; i++){
        right[i] = arr[mid+1+i];
    }
    left[l] = __INT_MAX__;
    right[r] = __INT_MAX__;
    int j = 0 , k=0 , i=beg ; 
    while(i<=end){
        if(left[j]<right[k]){
            arr[i] = left[j];
            j++;
        }
        else{
            arr[i] = right[k];
            k++;
        }
        i++;
    }
}

void mergeSort(vector<int>& arr , int beg , int end){
    if (beg<end){
        int mid = beg + (end - beg)/2;
        mergeSort(arr , beg , mid);
        mergeSort(arr , mid+1 , end);
        merge(arr , beg , mid , end);
    }
}

int main(){
    vector<int> arr{7 , 3 , 8 , 5 , 2 , 6};
    mergeSort(arr , 0 , arr.size()-1);
    for(int value:arr){
        cout<<value<<" ";
    }
}