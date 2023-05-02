#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc,const char *argv[])
{
    if (argc!=2) {
        printf("Shut the fuck up bro , you have to get the key in here ");
        return 1;
    }
    if (strlen(argv[1])!=26){
        printf("What the fuck is happening out there bro , key does not suffice ");
        return 1;
    }

    const char* key = argv[1];
    
    char plain_text[1] ;
    printf("Plain text :");
    scanf("%s" ,plain_text);
    
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if ('A'<plain_text[i]<'Z')
        {
            plain_text[i] = (*(key + (int)(plain_text[i]-'A'))); 
        }
        else
        {
            plain_text[i] = (*(key + (int)(plain_text[i]-'a')));        }
        
    }

    printf("Ciphered text : %s" ,plain_text);
     
    
   
    return 0;
}
