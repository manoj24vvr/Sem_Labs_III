package lab3;

import java.util.Scanner;
class sameNameError extends Exception{
	String errorMessage;
	public sameNameError(String errorMessage) {
		this.errorMessage=errorMessage;
	}
	public String toString() {
		return errorMessage;
	}
}
class Student{
	int ID;
	int marks[]=new int[5];
	String name;
	String FirstName,LastName;
	Scanner in = new Scanner(System.in);
	public Student() {
		ID=0;
		name="";
	}
	
	void getId() {
		System.out.println("enter the ID: ");
		ID = in.nextInt();
	}
	void getMarks() {
		int count=0;
		try {
				for(int i=0; i<5; i++) {
				System.out.println("enter the marks "+(i+1));
				
				marks[i]=in.nextInt();
				if (marks[i]<40) {
					count++;}
			}
			
			
			}catch(Exception exp) {
				System.out.println(exp);
			}
		if(count>0) {
			System.out.println("Failed, better luck next time");
		}
		else {
			System.out.println("Passed,great job");
		}
		
		
	}
	void compute() {
		int total=0;
		for(int i=0; i<5; i++) {
			total= total+ marks[i];
		}
		System.out.println("Total marks/score: "+total);
	}
	void getname() {
		System.out.print("\nenter name: ");
		name=in.next();
	}
	void ascii() {
		int nameLenght = name.length(); 
		for(int i = 0; i < nameLenght ; i++){   
		    char character = name.charAt(i); 
		    int ascii = (int) character; 
		    System.out.print(ascii+" ");
		}
	}
	void getFirstName() {
		System.out.println("enter the first name");
		FirstName=in.next();
	}
	void getLastName() {
		System.out.println("enter the last name");
		LastName=in.next();
	}
	
}
public class StudentMain {
	public static void main(String[] args) throws sameNameError {
//		Student obj = new Student();
//		obj.getId();
//		obj.getMarks();
//		obj.compute();
//		
//		obj.getname();
//		obj.ascii();
		
		Student[]check = new Student[2];
		check[0]=new Student();
		check[1]=new Student();
		
		check[0].getFirstName();
		check[0].getLastName();
		
		check[1].getFirstName();
		check[1].getLastName();
		
		if(check[0].FirstName.equalsIgnoreCase(check[1].FirstName)) {
			System.out.println("inside the loop");
			System.out.println(check[0].FirstName+check[0].LastName);
			System.out.println(check[1].FirstName+check[1].LastName);
			
			throw new sameNameError("same last name");
		}
	}
}
