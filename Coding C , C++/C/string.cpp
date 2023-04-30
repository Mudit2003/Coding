#include<iostream>
#include<cctype> // For character manipulation function - go to cppreference.com for more info on each
#include<cstring> // For string functions 
#include<string>//For getting std::string 

int main()
{
    // isalnum
    /*if (std::isalnum('#'))
    {
        std::cout<<"The character is alphanumeric "<<std::endl;
    }
    else
    {
        std::cout << "The character is not alphanumeric" << std::endl;// This way non alphanumeric can also be labeled to be alphapetic 
    }
    */
    //std::isblank
    /*char string[]{"M udit"};
    int blank_count{0};
    for (auto value:string)
    {
        if(std::isblank(value)){
            blank_count++;
        }
    }
    std::cout << "The number of blank characters in the particular string is : " <<blank_count<< std::endl;
    */

   //std::islower , std::isupper , std::tolower , std::toupper

   //std::isdigit - If it is a digit or not 

   /*char string_1[]{"Alabama"};
   char string_2[]{"Alabamb"};
   std::cout<<"The string which comes first in lexicographical order is"<<std::strcmp(string_1,string_2)<<std::endl;
    // Returns negative value if first guy comes before second in lexicographical order positive when the case is opposite or else zero 
    std::strncmp(string_1,string_2,int no_of_characters_to_be_compared)
    */
    // const char* makes up a string .......
    //std::strchr(string,target) : Find first target 
    /*const char*str{"Ham tumhare hai sanam"};
    char string[]{"Ham tumhare nahi hain sanam"};

    std::cout << str << std::endl;
    std::cout << string << std::endl;

    std::cout<<"Modifying the strings now "<<std::endl;

    str="Tum mere ho";
   //  string="Hum tumhare nahi hain sanaa"; you cannot reassign an array based string but you can for a pointer based string


    */
  
    const char* const str{"Mudit is greatttttttt "};// Not touching it is the best idea better make it a const pointer 
    // it is great as you cannot move the characters of the string as it is a constant pointer and cannot change the characters as they're all constant 
    const char* result = str;
    char target{'t'};
    int iteration{};//No. of occurences of the  character in target 
// for (int i = 0; (result = std::strchr(result,target)) == nullptr; i++)
// {
//     std::cout << "Found Target" << std::endl;
//     iteration=i;
// }


while ((result = std::strchr(result,target)) != nullptr) 
{
    std::cout<<"Found Target"<<std::endl;
    iteration++;
    result++;
    
}
// std::cout<<iteration;

std::cout<<iteration<<std::endl;
std::cout<<"The original message was : "<<str;
// std::cout<<"Result now stands as : "<<result<<std::endl;
// std::cout<<"The target "<<target<<" was found at "<<iteration;



//Problem scenerio never do this // Have some doubt too that needs to be cleared 
const char* str{"Legends never dies"};
char target{'e'};
const char* result{str};
int iterations{};

while ((result=std::strchr(result,target))!=nullptr)
{
   std::cout<<"Found it "<<std::endl;
   iterations++;
   str++;
}

std::cout<<"The iterations currently stand at : "<<iterations<<std::endl;
// std::cout<<"The value of result is : "<<result<<std::endl;
std::cout << "The value of string is : " <<str<< std::endl;
//std::strchr - to find the character at that position
// std::strrchr - to find the last occurance of the character 


//Concatenating and copying a string 
// std::strcat - concatenating two string - adding two strings
// std::strcatn - adding n characters from the other string 
/*char dest[50]{"Hello "}; // Keep the destination sufficienctly large so you don't get into the system memory and edit it 
char src[50]{"World!"};

std::strcat(dest,src);// The string gets added to the destination 
//strcpyn


//std::strcpy(dest,src);// The value of the source gets assigned to the destination 
std::cout << dest << std::endl;

*/
// std::string

// Special ways of initialization 
/*
std::string Hello{"Hello World",5};// This string will grab 5 characters to become Hello
std::string eeee{4,e};// e comes four times 
std::string{Hello,3,2};//Will grab two character from index three onward of string Hello 
*/
    
std::string H {std::string.front(Hello)};
    return 0;

     std::string Hello{"Hello"};
    std::cout<<Hello.front();// return front 
    // what we got to know from here that std::string is a class(something like that ) and we are creating an object of the given class as we need
    //for using functions of class string we have to do it as we do in java object.function ; 
      std::cout<<std::strchr(Hello , 3)<<std::endl;//does not work no known conversion from std::string to const char*
    //none of the cstring functions work on std::strings 
    // visit strings library to look for functions in here which are used by treating the created std::string type as object 

    // there is another type of modified version of std::strings which are std::string_view which are a read only version of std::string not requiring allocation of memory space for the same string over and over again 
}https://en.cppreference.com/w/cpp/string
// visit this link for reference 
