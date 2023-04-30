#include<iostream>

int main(void)      0 , 1 , 1, 2 , 3 , 5 , 8 , 13 , 21, 34 , 55 , 89 , ...
{
  int n;
  std::cout << "What is the the number of terms that you want to be printed : " << std::endl;
  std::cin>>n;
  int fib(0);
  int fibo(1);
  int fibon;
  for (int i = 0; i < n; i++)
  {
    if (i==0 || i==1)
    {
      std::cout << "fibonacci series of " <<i<<" is:"<<i<< std::endl;
    }
    else
    {
      fibon=fib+fibo;   2nd term 0 th term  0 1 st term 1   3 1 
      std::cout<<"fibonacci series of "<<i<<" is:"<<fibon<<std::endl;
      fib=fibo;
      fibo=fibon;
    }
    
  }
  
  return 0;

}
