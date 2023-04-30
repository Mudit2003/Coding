import java.util.Scanner ;
/** This is a documentation comment but maybe you cannot view it because I wish for it .*/
class SllNode {
	String item ;
	SllNode next ;
	SllNode(String item){
		this.item=item ;  			//if nothing is specified, local variable, or innermost varibale gets the preference while this refers to the current class
		                 			// this is basically behaves as a default object of the current class

		}

}







public class LinkedL {

	public static void deleteNode(SllNode start , int index){
		SllNode ptr = start;
		int count = 0 ;
		if(start == null ){
			System.out.println("Empty linked list ");
			}
		if(index == 0){//we want the first node itself to be deleted // single element list maybe
        ptr = start;
        start = start.next ;
        ptr = null ;
		}
		while(ptr!=null){
			if(count == index -1){
				ptr.next = (ptr.next).next ;
				System.out.println("Element deleted successfully");
				}
				ptr = ptr.next;
				count++;
			}

	}

	public static SllNode insertat(SllNode start , String Item , int index ){
		SllNode ptr= start ;
		if(index==0)return insertBeg(start , Item);// Now we have sorted this case problem
		int count = 0  ;
		while(ptr!=null){
			if(count==index-1){
				ptr.next = insertBeg(ptr.next , Item);
				System.out.println("Item insertion successfull");
				break;
			}
			ptr = ptr.next ;
			count++;
			}
		return start ;
		}

	public static SllNode insertBeg(SllNode start , String Item ){
			SllNode New = new SllNode(Item);

			New.next =  start; // ptr
			start = New ;  //
			return start ;
	}

	public static void traverse(SllNode Start){
		SllNode ptr = Start ;
		while(ptr!= null){
			System.out.print(ptr.item +"-->");
			ptr = ptr.next ;
			}
		}
	static Scanner sc = new Scanner(System.in);

	public static void main(String args[]){

		SllNode head = null ;
		int choice=1;
		String Item ;
     while(choice == 1){
		 System.out.print("Enter Item:");
		 Item = sc.next();
		 head = insertBeg(head , Item);
		 System.out.print("Press 1 to insert an element in the begining of this list :");
		 choice = sc.nextInt();
		 }
		 int index ;
		 System.out.println("The index that you want the item to be stored at : ");
		 index = sc.nextInt();
		 Item = sc.next();
		       head = insertat(head,Item,index);
		       deleteNode(head , 2);
		 		 traverse(head);
		}

	}

//Keshav told me that he created objects in java to create a linked list
// what it precisely requires is maybe an object and a link and a link to next such object
// that means it's time to use java to its fullest
