#include <bits/stdc++.h>

using namespace std;
int factorial(int x);

int main(void)
 {
    printf("%d" ,factorial(7));
    return 0;
}

int factorial(int x)
{
    if (x==0){
        return 1;
    }
    int y =x*factorial(x-1);
    return y;

}
