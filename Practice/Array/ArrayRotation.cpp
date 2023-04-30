int gcd(int a, int b)
{
    if (b == 0)
        return a;
 
    else
        return gcd(b, a % b);
}
 
/*Function to left rotate arr[] of size n by d*/
void leftRotate(int arr[], int d, int n)
{
    /* To handle if d >= n */
    d = d % n;
    int g_c_d = gcd(d, n);
    for (int i = 0; i < g_c_d; i++) {
        /* move i-th values of blocks */
        int temp = arr[i];
        int j = i;
 
        while (1) {
            int k = j + d;
            if (k >= n)
                k = k - n;
 
            if (k == i)
                break;
 
            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}

class Solution{
    private: 
    void reverseArrays(int arr[] , int beg , int end){
        int mid = (end-beg)/2;
        for(int i=0 ; i <= mid;i++)
        swap(arr[beg+i],arr[end-i]);
    }
   =
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
       // out there we have an algorithm for array reversal
       d%=n;
      reverseArrays(arr , 0 , d-1);
      reverseArrays(arr , d , n-1);
      reverseArrays(arr,0,n-1);
    }
};