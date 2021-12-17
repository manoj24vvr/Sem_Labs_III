package prog_1;
import java.util.Scanner;
import java.util.InputMismatchException;
public class Book {
	String name;
	String author;
	int id;
	double price;
	Scanner scan = new Scanner(System.in);
	
	
	int getID() {
		System.out.println("Enter Book ID: ");
		try {
			id = scan.nextInt();
		}catch(InputMismatchException exp) {
			System.out.println("exp");
		}catch(Exception e) {
			System.out.println(e);
		}
		
		return id;
	}
	
	String getName() {
		System.out.println("Enter Book Name: ");
		try {
			name = scan.next();
		}catch(InputMismatchException exp) {
			System.out.println(exp);
		}catch(Exception e) {
			System.out.println(e);
		}	
		
		return name;
	}
	
	String getAuthor() {
		System.out.println("Enter the Name of Book's Author: ");
		try {
			author = scan.next();
		}catch(InputMismatchException exp) {
			System.out.println("exp");
		}catch(Exception e) {
			System.out.println(e);
		}
		
		return author;
	}
	
	double getPrice() {
		System.out.println("Enter the price of the book: ");
		try {
			price = scan.nextDouble();
		}catch(InputMismatchException exp) {
			System.out.println("exp");
		}catch(Exception e) {
			System.out.println(e);
		}
		return price;
	}
	
	
	public void book(int id,String name,double  price) {
		System.out.println("Name of Book: " + name);
		System.out.println("Book ID: " + id);
		System.out.println("Price of the Book: " + price);	
	}
	
	
	
	
}
