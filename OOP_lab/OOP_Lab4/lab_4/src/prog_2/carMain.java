package prog_2;
import java.util.Scanner;
import java.util.InputMismatchException;
class Vehicle {
	protected String company;
	
	Scanner scan = new Scanner(System.in);
	
	void getInfo() {
		System.out.print("Enter Brand of Car: ");
		
		try {
			company = scan.next();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
	}
}

class Car extends Vehicle {
	protected String regNo;
	public String color;
	protected double price;
	Scanner scan = new Scanner(System.in);

	void getInput() {
		System.out.println("Enter car color:");
		try {
			color = scan.next();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		
		
		System.out.println("Enter car price:");
		try {
			price = scan.nextDouble();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		
		System.out.println("Enter Registration number :");
		
		try {
			regNo = scan.next();
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
	}

	void display() {
		
		System.out.println("Brand:" + company);
		System.out.println("Color:" + color);
		System.out.println("Price: Rs." + price);
		System.out.println("Registration No. :" + regNo);
	}
}

public class carMain {
	public static void main(String[] args) {
		Car[] c = new Car[4];
		for (int i = 0; i < 4; i++) {
			c[i] = new Car();
			System.out.println("Enter Car-"+(i+1)+" Details.");
			c[i].getInfo();
			c[i].getInput();
//			System.out.println(c[i]);
		}
		for (int i = 0; i < 4; i++) {
			System.out.println("\n-----Car-"+(i+1)+" Details-----\n");
			c[i].display();
		}
		try {
			if(c[0].company.equals(c[1].company)) {
				int a;
				a = 1/0;
			}
		}catch(Exception e) {
			System.out.println("\nException - Same Car Name");
		}
		
	}

}
