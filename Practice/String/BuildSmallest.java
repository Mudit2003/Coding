import java.util.*;
// This method works well but TLE 
public class BuildSmallest {
    static String buildLowestNumber(String str, int N) {
    // till string lenght is equal to str.length()-k
    int x = str.length()-N ;// 4 elements 
   // string removal does not augur very well so better go for substring 
   // two strings need to be tracked prev , current 
   if(x<=0)return null; 
   if(N==0)return str ; 
   String prev=new String();
   int minindex ;
   while(N>0&&str.length()+prev.length()>x&&str.length()>0){
       minindex=0 ; 
       for(int i=1 ; i<N+1 && i<str.length()-1;i++){
           if(str.charAt(i)<str.charAt(minindex))
           minindex = i ; 
           
           
       }
       N-=minindex;
       prev+=str.charAt(minindex);
       str=str.substring(minindex+1);
   }
   str = prev+str;
   if(N>0){
       str=str.substring(0,str.length()-N);
   }
   int i=0;
   for(;i<str.length()-1&&str.charAt(i)=='0';i++);
       
   
   
   return(str.substring(i)); 
}
}
//The most efficient solution
class Solution {
    static String buildLowestNumber(String str, int N) {
        // code here
        int n = str.length();
        Stack<Character> mystack=new Stack<>();
        for(int i=0;i<str.length();i++)
        {
            char c=str.charAt(i);
            while(!mystack.isEmpty() && N>0 && mystack.peek()>c)
            {   
                mystack.pop();
                N-=1;
            }
            
            if(!mystack.isEmpty() || c!='0')
                mystack.push(c);
        }
        while(!mystack.isEmpty() && N-->0)
            mystack.pop();
        if(mystack.isEmpty())
            return "0";
        
        StringBuilder sb=new StringBuilder();
        sb.append(str);
        while(!mystack.isEmpty())
        {
            sb.setCharAt(n-1,mystack.peek());
            mystack.pop();
            n-=1;
        }
        return sb.substring(n);
    }
}

