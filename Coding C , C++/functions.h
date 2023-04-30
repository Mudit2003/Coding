// void reverse(int Array[10] , int Length );
typedef struct vector {
    float x;
    float y; 
} vector;

void reverse(int* Array , int Length ){
    
    
    if(Length<=0)return;
      
        
       int temp = Array [0] ;
       Array[0]=Array[Length - 1];
       Array[Length-1] = temp ; 
      


    Array++ , Length-=2 ; 

    reverse (Array , Length );
}
void slice(char **str, int start, int end)
{    
    // char **str = &rob;
    *(*str + end) = '\0';
    *str += (start - 1);
    // return str;
}

char* strcpy(char* str ){
    return str; 
}

void strcpy (char* source , char* target ){
    while (*source!= '\0'){
        *target = *source ;
        target++ , source++;
    }
    *target = '\0';
}