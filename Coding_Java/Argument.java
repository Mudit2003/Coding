import java.io.InputStreamReader ;
import java.io.BufferedReader ; // Ram is called Buffer
import java.io.IOException ; // for exception handling
 //import java.lang.* - always included by default - double , int all data types are stored in this class
//alternatively
import java.util.* ; // will include java.util.Scanner ;
class Argument {
	public static void main(String args[]) throws IOException // Exception must be caught and reported error if not used
	{

		InputStreamReader read = new InputStreamReader(System.in);
		BufferedReader in= new BufferedReader(read);
		// Alternatively we can write
		//BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		DataInputStream in = new DataInputStream(System.in);// Better alternative to combination of InputStreamReader and Buffered Reader
		Scanner Sc = new Scanner (System.in);
		String name ;
		System.out.print("Name : ");
		name = in.readline(); // readline to convert to  //Integer.parseInt() //Double.parseDouble
		// If you are using readline you can only take inputstream as String
		int a = in.nextInt(); //in.nextDouble() , in.nextChar() , in.nextline() - takes complete line , in.next - takes only a word
		System.out.println("My name is:"+name );
		/*System.out.println("FirstName : " + args[0]);
		System.out.println("MiddleName : " + args[1]);
		System.out.println("LastName : " + args[2]);
		System.out.println("Age : " + args[3]);*/
	}
	}