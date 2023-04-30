import java.util.*;
import stack.Stack ;


class QuickSort{
int[] arr;
int temp , pivot ;
int quickRight(int[] arr,int right /*9*/ ,int left/*1*/){
pivot = left ;   // 1
while(right!=pivot){ // 9!=1
   if(arr[right]<arr[pivot]){
		temp = arr[right];    // swapping done at this point
		arr[right]=arr[pivot];   // right = 9
		arr[pivot]=temp;        // now pivot element is the element at current right
		pivot = quickLeft(arr,right,left);
		return pivot;
}
right--;
		}
return pivot ;
	}
int quickLeft(int[] arr,int right ,int left){
	pivot=right;
while(left!=pivot){
   if(arr[left]>arr[pivot]){
		temp = arr[left];
		arr[left]=arr[pivot];
		arr[pivot]=temp;

		pivot=quickRight(arr,right,left);
		return pivot ;
}
left++;
		}
return left ;
	}

void quickSort(int[] arr , int ub , int lb){
	int a , b ;
	Stack lower = new Stack() ;
	Stack upper = new Stack() ;
	upper.stack = new int[10];
	lower.stack = new int[10];
	upper.push(ub);
	lower.push(lb);
   // Let us think what are we supposed to do
   // It will take quite a few steps to get there
   // problem is with the iff condition

    while(upper.top!=-1){
		a = upper.value();
		b = lower.value();
		System.out.println("a,b:"+a+" "+b);
		pivot = quickRight(arr , a , b);
		System.out.println("pivot:"+pivot);
	upper.pop();
	lower.pop();

       if(a>pivot+1){
  upper.push(a);
  lower.push(pivot+1);
	    }
		if(b<pivot-1){
upper.push(pivot-1);
lower.push(b);
}



	}
}}
class Sort{
	int Arr[] , n , newArr[];
	Sort(int[] Arr){
		n = Arr.length;
this.Arr = new int[n];
		this.Arr= Arrays.copyOf(Arr,Arr.length);
		}

 //int n = Arr.length;
/*int[] newArray;
void insertionsort(int Array , int n){
newArray = new int[n];
newArray[0]=Array[0];
for(int i = 1 ;  i<n ; i++ ){
newArray[i] = Array[i];
count = i-1;
while(newArray[count]>Array[i]){
newArray[count+1]=newArray[count];
newArray[count]=Array[i];
count--;
}
}
}*/

// Let us have a look at what is important to merge sort
// sorting left , right and merging so as to get the right elements at the right places
// The algorithm will be
/*
if(array==1){return }
*/
 merge(){
	 }
void mergesort(int[] array , int left , int right ){
 if(left>right)
 return ;
 mid = (left+right)/2;
 mergesort(array,left,mid);
 mergesort(array,mid+1,right);
 merge(array,left,mid,right);
 return;

	}

void insertionsort(){
	newArr = new int[n];
	newArr[0]=Arr[0];
	int count;
	for(int i = 1 ; i<n ; i++){
		count = i ;
		while(newArr[count-1]>Arr[i] && count>0){
			newArr[count]=newArr[count-1];
			count--;
			}
		newArr[count]=Arr[i];
		}
	}
void insertionSort(){
   newArr = new int[n];
	newArr[0]=Arr[0];
    int count,temp;
    for(int i=1 ; i<n ; i++ ){
		count = i ;
		//newArr[i]=Arr[i];
		temp = Arr[i];
		while(temp<newArr[count-1] && count>=0){
			//Collections.swap(newArr , count , count-1); //works only for list data type
			newArr[count]=newArr[count-1];
			newArr[count-1]=temp;
			count = count - 1;
		}
		newArr[count]=temp;
	}



}

void displayArray(){
	for(int i = 0 , n = newArr.length ; i < n ; i++){
		System.out.println("Array at"+i+":"+newArr[i]);
		}
	}
}

public class SortingTechnique{

	public static void main(String args[]){
		int Arr[] = {1,7,8,2,3,5,10,9,6,4};
        QuickSort s = new QuickSort();
        s.quickSort(Arr,Arr.length-1,0);
		for(int i = 0; i < Arr.length ; i++){
			System.out.println(Arr[i]);
			}


		}
	}