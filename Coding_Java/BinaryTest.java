import java.util.Scanner ;

class PosIntBinary{
	int num ;
	PosIntBinary(int num){
		this.num = num ;
		}
	int binum ;
    int posIntBinary(int num){
		if(num ==0 || num ==1)
		return num ;
		binum = posIntBinary(num/2)*10 + num%2;
		return binum ;
		}
	}

	public class BinaryTest{
		public static void main(String args[]){
	    PosIntBinary obj = new PosIntBinary(14);
	    int binary = obj.posIntBinary(14);
	    System.out.println("The binary of 14 is : "+binary);
			}
		}