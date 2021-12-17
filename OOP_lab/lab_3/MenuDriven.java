package lab3;

import java.util.Scanner;
import java.lang.*;
public class MenuDriven {
    Scanner sc = new Scanner(System.in);
    public String str1, str2, str3, ss;
    char ch;
    public void compare(){
	    System.out.println("Enter the first string: ");
	    str1 = sc.nextLine();
	    System.out.println("Enter the second string: ");
	    str2 = sc.nextLine();
	    if(str1.equals(str2)){
	    System.out.println(str1+" is equal to "+str2);
	    }
    }
    void convert() {
	    System.out.println("Enter a character to convert it to the opposite case: ");
	    ch = sc.next().charAt(0);
	    if (ch > 'a' && ch < 'z' && ch != ' ') {
	    System.out.println("The character converted to Upper Case is: " + Character.toUpperCase(ch));
	    }
	    else if (ch > 'A' && ch < 'Z' && ch != ' ') {
	    System.out.println("The character converted to Lower Case is: " + Character.toLowerCase(ch));
	    }
	    else {
	    System.out.println("Error! Enter a character! ");
	    }
    }

    void substring(){
	    System.out.println("Enter the main string: ");
	    str3 = sc.nextLine();
	    System.out.println("Enter the string whose presence you want to check in the main string: ");
	    ss = sc.nextLine();
	    if(str3.contains(ss)) {
	    String str4 = str3.replace(ss, "Hello");
	    System.out.println("The new string is: " + str4);
	    }
	    else{
	    System.out.println("The string does not contain the expected substring! ");
	    }
    }
    public static void main(String []args){
	    MenuDriven ob = new MenuDriven();
	    Scanner sc = new Scanner(System.in);
	    int n = 0;
	    System.out.println("Menu: ");
	    System.out.println("Enter 1 to compare strings! ");
	    System.out.println("Enter 2 to convert characters to opposite cases! ");
	    System.out.println("Enter 3 to check if a certain string contains another certain sub-string! ");
	    try{  n = sc.nextInt();
	    }catch(Exception e) {
	        System.out.println(e);
	    }
	    
	    switch(n){
		    case 1:
		    ob.compare();
		    break;
		    case 2:
		    ob.convert();
		    break;
		    case 3:
		    ob.substring();
		    break;
		    }
	    }
    }
