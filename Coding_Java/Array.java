import java.util.Scanner ;


public class Array{
// Array can be defined as a collection of similar data types stored in contiguous location

static void sort(int[] array){
	int temp ;

	for(int i = 0 ; i < 10 ; i++){

		for(int j = i+1 ; j<10 ; j++){
			//System.out.println("Now it is the time to sort ");
			if(array[j]<array[i]){
			temp = array[j];
			array[j]=array[i] ;
			array[i] = temp ; }

			}

		}
	}
	public static void main(String args[]){
        // int arr[];
		//arr = new int[10];
		int[] arr = {7 , 5 , 8 , 9 , 3 , 2 , 1 , 4 , 6 , 0};
		sort(arr);
		for(int i = 0 ; i < 10 ; i++){
			System.out.println("Value:"+arr[i]);
			}
		}

	}