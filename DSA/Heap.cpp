#include<iostream>
#include<vector>
using namespace std ; 

class Heap{
   public :
    vector<int> arr ; 
    Heap(vector<int> arr){
        this->arr = arr ; 
    }
    void heapify(Heap& H , int i ){
    // i denotes the root node where heapify is to be done 
    int largest(i); 
    if(H.arr.at(2*i+1)>H.arr.at(i) && 2*i+1<H.arr.size())
    largest = 2*i + 1 ; 
    if(H.arr.at(2*i+2)>H.arr.at(i) && 2*i+2<H.arr.size())
    largest = 2*i + 2 ; 
    if(largest==i)return ; 
    swap(H.arr.at(i),H.arr.at(largest));
    heapify(H , largest);
    }

    void buildMaxHeap(Heap& H){
        
        for(int i = H.arr.size()/2 + 2 ; i >= 0 ; i--){
            heapify(H ,i);
        }
    }


};

int main(){
  //  vector<int> arr{1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 };
    Heap H{{1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 }}; // this line is a valid line of code because comma seperated values inside braces are a vector
    H.buildMaxHeap(H);
}