#include <stdio.h>

int CommoninArray(int* Array , int* New_Array , int n ){
int common=0 ,c, j=1 ;
New_Array[0]=Array[0];
//int n = sizeof(Array)/sizeof(int)
for(int i = 1; i< n ; i++){
for(int k = 0 ; k < j ; k++){
    if(Array[i]==New_Array[k])
    goto A     ; 
}
New_Array[j]=Array[i];
j++;
A: continue ;

}
for(int i =0 ; i < j  ; i++){
    c=0 ;
   for(int k =0 ;k < n ; k++){
    if(New_Array[i] == Array[k])c++;
   }
   if(c>1) common++;
}
printf("common:%d\n" ,common);
return j;
}

int main(void){
int Array[] = {7,3,3,2,1,0,8,2,9,2,1};
int n = sizeof(Array)/sizeof(int);
int new_Array[n];
int sizenew = CommoninArray(Array , new_Array , n);
for(int i = 0 ; i<sizenew ; i++){
    printf("%d," , new_Array[i]);
}
/*int c = 0 , common = 0 ;
for(int i = 0 ; i < n ; i++){
for(int j = i+1 ; j<n ; j++){
if(Array[i] == Array[j]){
n-- , c++ ;
for(int k = j ; k < n ; k++)
{
    Array[k]=Array[k+1];
}}
}
if(c>0)common++,c=0;
}
for(int i = 0 ; i<n ; i++){
    printf("%d," , Array[i]);

}
printf("\nCommon:%d" , common);*/
}
