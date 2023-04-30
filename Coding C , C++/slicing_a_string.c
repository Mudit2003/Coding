#include <stdio.h>
#include "functions.h"


// void slice(char **str, int start, int end);


// void slice (char str[20] , int start , int end );
int main(void)
{
    char s[20] , storage[20];
    int m, n;
    char* string = s ;
    printf("Give me the string:\n");

    fflush(stdin);
    scanf("%s", string);
    // printf("%s\n", string);
    // printf("From what word to what word you want the string to be sliced : "); // User input in index 1
    // fflush(stdin);
    // scanf("%d%d", &m, &n);
    // // for (int i = m-1; i < n; i++,*slice++)
    // // {
    // //     *slice=*(string + i);

    // // }
    // slice = string+m-1;
    // *(slice + n-m) = '\0';
   // slice(string, m, n);
    // printf("%s", string);
    
    strcpy(string , storage);
    printf("%s" ,storage);


}



// void slice(char str[20] , int start , int end){
//     int i ; // When you assign a variable to another variable only values are being assigned for further rather use pointer 
//     while (start + i <= end)
//     {
//         str[i]=str[start+i-1];
//         i++;
//     }
//     str[i]='\0';
// }

