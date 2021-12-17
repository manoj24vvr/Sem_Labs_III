package dummyDemo;
import java.util.Scanner;
import java.lang.*;
import java.util.InputMismatchException;

public class fake {
	static int isSubstring(String s1, String s2)
	    {
	        int M = s1.length();
	        int N = s2.length();
	        for (int i = 0; i <= N - M; i++) {
	            int j;
	            for (j = 0; j < M; j++)
	            	if (s2.charAt(i + j)!= s1.charAt(j))
	                    break; 
	            if (j == M)
	                return i;
	        }
	 
	        return -1;
	    }
	public static void main(String args[]) {
		Scanner scn = new Scanner(System.in);
		try{
			int option;
			String myStr1;
			String myStr2;
			myStr1 = scn.nextLine();
			myStr2 = scn.nextLine();
			String newStr;
			System.out.println("Enter an option to run a switch case:");
			option = scn.nextInt();
			
			switch(option) {
			case 1:
				System.out.println(myStr1.compareTo(myStr2));
				break;
			case 2:

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
				int res = isSubstring(myStr1, myStr2);
				 
				if (res == -1)
					System.out.println("Not present");
				else
				    System.out.println("Present at index " + res);
				break;
			case 4:
				int res1 = isSubstring(myStr1, myStr2);
				 
				if (res1 == -1)
					System.out.println("Not present");
				else
					System.out.println(myStr2.replace(myStr1, "Hello"));
				break;
			default:
				System.out.println("Enter an option within the range.");
				break;
			}
		}catch(InputMismatchException exp) {
			System.out.println("Invalid option");
		}
	}
}
