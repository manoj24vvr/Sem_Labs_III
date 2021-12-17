package lab3_prog3;

import java.util.Scanner;
import java.util.InputMismatchException;
public class menuDemo {
	static int isSubstring(String s1, String s2)
	    {
	        int a = s1.length();
	        int b = s2.length();
	        for (int i = 0; i <= b - a; i++) {
	            int j;
	            for (j = 0; j < a; j++)
	            	if (s2.charAt(i + j)!= s1.charAt(j))
	                    break; 
	            if (j == a)
	                return i;
	        }
	 
	        return -1;
	    }
	
	public static void main(String args[]) {
		Scanner scan = new Scanner(System.in);
		int opt;
		String myStr1;
		String myStr2;
		System.out.println("Enter string-1: ");
		myStr1 = scan.next();
		System.out.println("Enter string-2: ");
		myStr2 = scan.next();
		System.out.println("Select 1 to compare");
		System.out.println("Select 2 to convert cases");
		System.out.println("Select 3 to check substring");
		System.out.println("Select 4 to replace substring with 'Hello'");
		System.out.println("Enter a choice:");
		try{	
			while(true) {
				opt = scan.nextInt();
				
				switch(opt) {
				case 1:
					if(myStr1.compareTo(myStr2) == 0) {
						System.out.println("Both Strings are Same.");
					}else {
						System.out.println("Both are different strings.");
					}
					break;
				case 2:
	
					for(int i=0;i<myStr1.length();i++)
					{	char ch;
						ch=myStr1.charAt(i);
						if(Character.isUpperCase(myStr1.charAt(i)))
						{
							System.out.print(Character.toLowerCase(ch) );
						}
						else
							System.out.print(Character.toUpperCase(ch));					
					}  
					System.out.println();
					break;
				case 3:
					int res = isSubstring(myStr2, myStr1);
					 
					if (res == -1)
						System.out.println("Not present");
					else
					    System.out.println("Present at index " + res);
					break;
				case 4:
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
			}
		}catch(InputMismatchException exp) {
			System.out.println("Invalid option");
		}
	}
}
