// void reverse(int Array[10] , int length ){
//     int temp ; 
//     for (int i = 0 ; i < length/2 ; i++){
//        temp = Array [i] ;
//        Array[i]=Array[length - i - 1];
//        Array[length - i - 1] = temp ; 
//     }
// }
void reverse(int* Array , int Length ){
    
    
    if(Length<=0)return;
      
        
       int temp = Array [0] ;
       Array[0]=Array[Length - 1];
       Array[Length-1] = temp ; 
      


    Array++ , Length-=2 ; 

    reverse (Array , Length );
}


