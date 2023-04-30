#include<iostream>
#include<vector>
using namespace std ; 

class MidToStart{
    private:
    void caseEven(vector<int>array,vector<int>res){

    }
    void caseOdd(vector<int>array,vector<int>res){
        // case Odd is slighlty easier of the two 
        // 2 8 5 9 10 
        //9 5 2 10 8 
        vector<int>res(array.size());
        int i=0,j=array.size()-1,mid=i+(j-i)/2;
        // loop goes one less then twice the mid 
        int count = 2*mid ;
        res.at(mid)=array.at(i++);
        res.at(mid+1)=array.at(j--); 
        for (int c = 0; c<mid&&j>=mid; c++ , j--)
        {
            res.at(c)=array.at(j);
        }
        for (int c = array.size()-1; c>mid+1 &&  i<mid; c-- , i++)
        {
            res.at(c)=array.at(i);
        }
        
        
    }
    public: 
    vector<int> midToStart(vector<int>array){
    
    }
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}

