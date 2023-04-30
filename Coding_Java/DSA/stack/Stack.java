package stack;

public class Stack{

	public int[] stack;
	public int top = -1 ;

	public void push(int item ){
		if(top==stack.length-1){
			System.out.println("Array overflow");
			return ;
			}

		stack[++top]= item ;
		return  ;
		}

		public void pop(){
			if(top==-1){
				System.out.println("Already empty");
				return ;
				}
			top -- ;
			return;
}

public int value(){
	return stack[top];
	}

	}