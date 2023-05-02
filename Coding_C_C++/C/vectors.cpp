#include<iostream>
#include<vector>
//using namespace std;
int hourglass(std::vector<std::vector<int>> array  ){
int sum , max = 0 ;
for(int i = 0 ; i < 4 ; i++){
   
    for(int j=0 ; j<4 ;j++){
        int count = 0 ;
        sum = array[i][j] + array[i][j+1] + array[i][j+2] + array[i+1][j+1] +  array[i+2][j] + array[i+2][j+1] + array[i+2][j+2] ;
        // More optimized way of adding hourglasses 

    }
    if(sum>max)max = sum ;
}
return max ;
}

int main (){
std::vector< std::vector<int>> v(6); // compiler thinks of it as a vector of six integer type vectors



}