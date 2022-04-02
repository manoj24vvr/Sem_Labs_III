package prog_1;
import java.util.InputMismatchException;
import java.lang.NegativeArraySizeException;
import java.util.Scanner;
class Student_Detail {
	String name;
	int id;
	String college_name;
	
	public Student_Detail() {
		name = "";
		id = 0;
		college_name = "";
	}
	
	void getInput() {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter Student name: ");
		try {
			name = scan.next();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		System.out.println("Enter student ID: ");
		try {
			id = scan.nextInt();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		System.out.println("Enter student College Name: ");
		try {
			college_name = scan.next();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		scan.close();
	}
	
	void Display_details(){
		System.out.println("Name: "+name);
		System.out.println("ID: "+id);
		System.out.println("College Name: "+college_name);
	}
}
public class studentMain{
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter no. of students: ");
		int n = 0;
		try {
			n = scan.nextInt();
		}catch(Exception e) {
			System.out.println(e);
		}
		Student_Detail[] stu = new Student_Detail[n];
		
		for(int i=0;i<n;i++) {
			stu[i] = new Student_Detail();
			System.out.println("Enter Student-"+(i+1)+" Details");
			stu[i].getInput();
		}
		for(int i =0;i<n;i++) {
			System.out.println("---Student-"+(i+1)+" Details---");
			stu[i].Display_details();
		}
		scan.close();
	}
} 