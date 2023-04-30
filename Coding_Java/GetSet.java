class Get {
	Get(){
		System.out.println("This is the class Get");
		}
	private String password ;
	void getpassword(String pass){
		password = pass  ;
		}
	 String setpassword(){
		return password ;
		}
	}

	public class GetSet{
		public static void main(String args[]){
			Get g = new Get();
			//g.password = "Ananya";
			g.getpassword("Ananya");
			System.out.println("The password is :"+g.setpassword());
			}
		}