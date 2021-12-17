package lab3_prog3;

import java.util.Scanner;
import java.util.InputMismatchException;

public class menuDriven {
	static int isSubstring(String s1, String s2)
	    {
	        int i,j,a = s1.length();
	        int b = s2.length();
	        for (i = 0; i <= b - a; i++) {
	            for (j = 0; j < a; j++)
	            	if (s2.charAt(i + j) != (s1.charAt(j)))
	                    break; 
	            if (j == a)
	                return i;
	        }
	 
	        return -1;
	    }
	
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		try{
			int option;
			String myStr1;
			String myStr2;
			String newStr;
			System.out.println("Enter an option to run a switch case:  \n");
			System.out.println("Select 1 to compare 2 strings");
			System.out.println("Select 2 to convert cases of a string");
			System.out.println("Select 3 to check substring");
			System.out.println("Select 4 to replace substring with 'Hello'");
			option = scan.nextInt();
			
			switch(option) {
			case 1:
				System.out.println("Enter String 1: ");
				myStr1 = scan.next();
				System.out.println("Enter String 2: ");
				myStr2 = scan.next();
				System.out.println(myStr1.compareTo(myStr2));
				break;
			case 2:
				System.out.println("Enter String: ");
				myStr1 = scan.next();
				for(int i=0;i<myStr1.length();i++)
				{	char ch;
					ch=myStr1.charAt(i);
					if(Character.isUpperCase(myStr1.charAt(i)))
					{
						System.out.print(Character.toLowerCase(ch));
					}
					else
						System.out.print(Character.toUpperCase(ch));					
				}    	
				break;
			case 3:
				System.out.println("Enter String: ");
				myStr1 = scan.next();
				System.out.println("Enter sub-String 2: ");
				myStr2 = scan.next();
				int res = isSubstring(myStr2, myStr1);
				 
				if (res == -1)
					System.out.println("Not present");
				else
				    System.out.println("Present at index " + res);
				break;
			case 4:
				System.out.println("Enter String: ");
				myStr1 = scan.next();
				System.out.println("Enter sub-String 2: ");
				myStr2 = scan.next();
				int res1 = isSubstring(myStr2, myStr1);
				 
				if (res1 == -1)
					System.out.println("Not present");
				else
					System.out.println(myStr1.replace(myStr2, "Hello"));
				break;
			default:
//				System.out.println("Enter an option within the range.");
				throw new InputMismatchException("Exception - Invalid Entry");
				
			}
		}catch(InputMismatchException exp) {
			System.out.println("Invalid option");
		}
		
	}
}
