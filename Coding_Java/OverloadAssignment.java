import java.util.Scanner;

class OverloadDemo{
	String overload ;
	int count;
	void test(){
		System.out.println("Next test is probabiltity");
		}
	void test(String day){
		System.out.println("Test of Probability on"+day);
		}
	void test(int day){
		System.out.println("Only "+day+" days to exam");
		}
	void test(String subject , int day ){
		System.out.println("Exam after "+day+" of "+subject);
		}

	OverloadDemo(){
		System.out.println("This is a non parametrized constructor");
	}
	OverloadDemo(String a , int b){
		overload = a ;
		count = b ;
		System.out.println("This constructor has two parameters a string and an integer");
	}
    OverloadDemo(String a ){
		overload = a ;
		System.out.println("This constructor has a string as its parameters ");
		}
	OverloadDemo(int a){
		count = a;
		System.out.println("This constructor has integer as its parameter");
		}
	}


public class OverloadAssignment {
	public static void main(String args[]){
		OverloadDemo ov = new OverloadDemo();
		ov.test();
		ov.test("Sunday");
		ov.test(7);
		ov.test("Discrete Mathematics " , 7);

		OverloadDemo ov_1 = new OverloadDemo("Mudit");
		OverloadDemo ov_2 = new OverloadDemo("Mudit",7);
		OverloadDemo ov_3 = new OverloadDemo(7);
		}
	}