class College{
	String collegeName , principalName , place ;
	College(String a , String b , String c){
		collegeName = a;
		principalName = b;
		place=c;
		}
	void display(){
		System.out.println("College Name : "+collegeName);
		System.out.println("Principal Name :"+principalName);
		System.out.println("Place:"+place);
		}
	}

public class CollegeDemo{

	public static void main(String args[]){
		College nitap_jote = new College("NIT Aruncachal Pradesh","Pinnakeshwar Mahanta","Jote");
		nitap_jote.display();
		}

	}