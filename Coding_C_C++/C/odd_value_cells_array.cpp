#include <iostream>

int main(){
    int m,n;
    std::cout<<"What is the number of rows and columns in the matrix: ";
    std::cin>>m>>n;
    int matrix[m][n]; //Now we have the matrix 
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n;j++)
        {
            matrix[i][j]=0;
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout<<matrix[i][j];
        }
        std::cout << std::endl;
        
    }
    

    int indices[][2]{{1,2},{2,2}};

    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < 2; j++)
       {
           matrix[i][indices[j][2]]++;
       }
        
    }

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < 2; j++)
       {
           matrix[indices[j][1]][i]++;
       }
        
    }

    std::cout << "Now we have a new matrix " << std::endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout<<matrix[i][j];
        }
        std::cout << std::endl;
        
    }
    

}



    