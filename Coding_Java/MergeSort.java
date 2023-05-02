import java.util.Scanner;

class Problem{
    void mergeSort(int[] arr , int beg , int end){
        if(beg>=end)return;
        int mid = beg + (end-beg)/2 ; 
        System.out.println("MergeSort");
        mergeSort(arr , beg , mid );
        System.out.println("MergeSort");
        mergeSort(arr , mid+1 , end );
        System.out.println("Merge");
        merge(arr , beg , mid , end );
    }

    void merge(int[] arr , int beg , int mid , int end){
        int[] left , right ; 
        int l = mid-beg + 1 , r = end -mid ; 
        left = new int[l] ;
        right = new int[r];
        
        for(int i= 0 ; i < l ; i ++){
            left[i] = arr[beg+i];
            System.out.print(left[i]+" ");
        }
        
        for(int i=0 ; i<r ; i++){
            right[i] = arr[mid+1+i];
            System.out.print(right[i]+" ");
        }   

        int lptr=0 , rptr=0 , ptr=beg ; 

        while(lptr < l && rptr<r ){
            if(left[lptr]>right[rptr]){
                arr[ptr] = right[rptr];
                rptr++;
            }
            else{
                arr[ptr] = left[lptr];
                lptr++;
            }
            ptr++;
        }

        while(lptr<l){
            arr[ptr]=left[lptr];
            lptr++;
            ptr++;
        }

        while(rptr<r){
            arr[ptr]=right[rptr];
            rptr++;
            ptr++;
        }

    }

    void displayArr(int[] arr){
        System.out.println("\nPrinting an array:");
        for(int i: arr){
            System.out.print(i);
        }
    }
}

class MergeSort{
    
    
    static final Scanner sc = new Scanner(System.in);
    public static void main(String args[]){
        int[] arr ; 
        int n ; 
        System.out.print("Length:");
        n = sc.nextInt();
        arr = new int[n];
        for(int i=0 ; i< n ; i++){
            System.out.println("Index "+i+":");
            arr[i]=sc.nextInt();
        }
        System.out.println("Arr:"+arr[0]);
        final Problem p = new Problem();
        p.mergeSort(arr, 0,n-1);
        p.displayArr(arr);
        
    }
}