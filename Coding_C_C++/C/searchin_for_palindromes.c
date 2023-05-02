#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char word[80];
    printf("What is the word to be searched for being a palindrome : ");
    scanf("%s" , &word);
    int l=strlen(word);
    

    for(int i=0 ; i<l/2 ; i++ ){
        if (word[i]==word[l-i-1])
        {
            continue;
        }
        else
        {
            printf("Not a palindrome ");
            return 1;
        }
        
    }
    printf("It is a palindromic sequence ");

    return 0;
}
