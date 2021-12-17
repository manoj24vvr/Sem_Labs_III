package prog_1;
//import java.util.InputMismatchException;
import java.util.Scanner;
public class bookMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n;
		String NAME1,NAME2;
		String AUTHOR1,AUTHOR2;
		int ID1,ID2;
		double PRICE1,PRICE2;
		double total = 0;
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter total number of books: ");
		n = scan.nextInt();
		Book a = new Book();
		Book b = new Book();
//		for(int i = 0; i<n ; i++) {
//			System.out.println("Enter details of Book-" + i);
//			ID = a[i].getID();
//			NAME = a[i].getName();
//			PRICE = a[i].getPrice();
//			AUTHOR = a[i].getAuthor();
////			a[i].Book(ID,NAME,PRICE);
//			
//		}
			ID1 = a.getID();
			NAME1 = a.getName();
			AUTHOR1 = a.getAuthor();
			PRICE1 = a.getPrice();
			
			System.out.println("Name of Book's Author: "+ AUTHOR1.toUpperCase());
			a.book(ID1,NAME1,PRICE1);
			total = PRICE1;
		if(n == 2) {
			
			ID2 = b.getID();
			NAME2 = b.getName();
			AUTHOR2 = b.getAuthor();
			PRICE2 = b.getPrice();
			
			System.out.println("Name of Book's Author: "+ AUTHOR2);
			b.book(ID2,NAME2,PRICE2);
			
			total = total + PRICE2;
		}
		
		
		
		
		
		System.out.println("Total Price of the books: "+ total);
		
		scan.close();
	}

}
