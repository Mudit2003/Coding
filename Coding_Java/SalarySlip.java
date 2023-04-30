// Define a class Employee with the following members to compute the salary slip of an employee
// Members : empno - employee number ; name ; basic_pay ; house_rate_allowance ; Dearness_allowance ; Income tax ; Gross pay(GP)
//Functions : void calc - HRA = BP * 0.10 ; DA = 0.55*BP ; IT = 0.6*BP ; GP = BP + HRA + DA - IT
            // void display : print salary , employee no , basic pay , hra , da , income tax , gross pay

import java.util.Scanner;

class Employee{
	int empno  ;
	String name ;
	double BP ;
	double HRA ;
	double DA ;
	double IT  ;
	double GP ;

	void calc (){
		       HRA = BP / 10 ;
		       DA = 0.55 * BP ;
		       IT = 0.6 * BP  ;
		       GP = BP + HRA + DA - IT ;
		}

	void display(){
		System.out.println("Name :"+name) ;
		System.out.println("Employee No . : "+empno);
		System.out.println("Basic Pay : " + BP);
		System.out.println("HRA : "+HRA);
		System.out.println("DA : "+DA);
		System.out.println("IT : "+IT) ;
System.out.println("Gross Salary : " + GP);
}}



public class SalarySlip{

	public static void main(String args[]){
		Employee mudit = new Employee();
		mudit.empno = 1 ;
		mudit.BP = 100000;
		mudit.name = "Mudit " ;
		mudit.calc();
mudit.display();
}}












