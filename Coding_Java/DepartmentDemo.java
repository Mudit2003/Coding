import java.util.Scanner;

class Department{
	String Department_Name , HOD_Name;
	Department(String a , String b){
		Department_Name = a;
		HOD_Name = b ;
	}
	Department(){

		}
	void showDepartmentDetails(){
		System.out.println("Department of "+Department_Name);
		System.out.println("HOD Name :"+HOD_Name);
		}


	}

class StaffMember extends Department{
	String Staff_Member_Name , Staff_Member_Qualification;
	StaffMember( String a , String b , String c , String d){
		super(a,b);// Important step as if it is not there than the constructor calls the non paramtetrized constructor Department()
		Staff_Member_Name = c ;
		Staff_Member_Qualification = d ;
		}
	void showStaffMemberDetails(){
			System.out.println("Staff Member Name:"+Staff_Member_Name);
			System.out.println("Staff Member Qualification:"+Staff_Member_Qualification);
			//super.showDepartmentDetails();

			}
	}

public class DepartmentDemo{
	static Scanner sc = new Scanner(System.in);
	public static void main(String args[]){
		String department_name , hod_name , staff_member , staff_member_qualification;
		Department De = new Department("Maths","KRS") ;

		StaffMember Mudit = new StaffMember("Math" ,"KRS" ,"Definetely Not me ","Abstract");

		Mudit.showStaffMemberDetails();
        De.showDepartmentDetails();
		}
	}
