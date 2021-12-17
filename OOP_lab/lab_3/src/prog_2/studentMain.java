package prog_2;
import java.util.Scanner;
import java.util.InputMismatchException;

class Student{
	int ID, n;
	String FirstName, LastName;
	double[] Marks = new double[5];
	double sum;
	Scanner scan = new Scanner(System.in);
	
	public Student() {
		ID = 0;
		sum = 0;
		n = 0;
	}	
	
	void getID() {
		System.out.println("Enter student ID: ");
		try {
			ID = scan.nextInt();
		}catch(InputMismatchException exp) {
			System.out.println(exp);
		}catch(Exception e) {
			System.out.println(e);
		}
	}
	
	public void getFirstname() {
		System.out.println("Enter first name: ");
		FirstName = scan.next();
	}
	void getLastname() {
		System.out.println("Enter Last name: ");
		LastName = scan.next();
	}
	
	
	void getMarks() {
		
		for(int i=0;i<5;i++) {
			try {
				Marks[i] = scan.nextDouble();
			}catch(InputMismatchException exp) {
				System.out.println("Exception");
			}catch(Exception e) {
				System.out.println(e);
			}
			
			sum = sum + Marks[i];
			if(Marks[i] <= 40) {
				n += 1;
			}
		}
		if(n>0) {
			System.out.println("Student failed in "+n+" subjects");
		}else {
			System.out.println("Student passed in all the subjects.");
		}
		System.out.println("Total score: " + sum);
	}
	
	void ASCIISentence()
	{
		int l = FirstName.length();
		int convert;
		for (int i = 0; i < l; i++) {
			convert = FirstName.charAt(i);
			System.out.print(convert + " ");
		}
		
//		int l = LastName.length();
//		int convert;
//		for (int i = 0; i < l; i++) {
//			convert = FirstName.charAt(i);
//			System.out.print(convert + " ");
//		}
	}
	
}

public class studentMain {

	public static void main(String[] args) {
//		int n;
//		Scanner scan = new Scanner(System.in);
//		System.out.println("Enter number of students(1 or 2): ");
//		n = scan.nextInt();
		// TODO Auto-generated method stub
		Student s1 = new Student();
		s1.getID();
		
		s1.getFirstname();
		s1.getLastname();
		
		Student s2 = new Student();
		s2.getID();
		
		s2.getFirstname();
		s2.getLastname();
		
		System.out.println("ASCII of student name: ");
		s1.ASCIISentence();

			try {
				s1.LastName.equalsIgnoreCase(s2.LastName);
//					System.out.println("Last names are not same.");
//				boolean a = 1<2;
			}catch(Exception e) {
				System.out.println("Last Name is: " + s1.LastName);
				System.out.println("Both have same last name");
			}
		
			System.out.println("\nEnter all 5 sub marks of student 1: ");
			s1.getMarks();
			System.out.println("Enter all 5 sub marks of student 2: ");
			s2.getMarks();
			
			
			
		
	}

}
