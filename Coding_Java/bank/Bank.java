package bank;

 class Account {
    public String name ; // any package can access it - if it can access the class
    public int account_number ;
    public String IFSC;
    int customer_id; // default type - everything inside this package can access it but not any other package
    private double account_balance;// even the classes inside this package cannot access it
    protected String account_password ;// everything inside this package can access it and its subclasses in other package can access it
    // private classes are used by using getters and setters
    public String getPassword(){
		return account_password;
	}
	public void setPassword(String account_password){
		this.account_password = account_password;
		}
}

public class Bank {
	public static void main(String args[]){
		Account ac = new Account();
		ac.setPassword("Robust");
		System.out.println(ac.getPassword());
		}
	}

