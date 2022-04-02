package prog_2;
import java.util.Scanner;
class GoalsCannotbeNegativeException extends Exception{
	String errorMessage;
	public GoalsCannotbeNegativeException(String errorMessage) {
		this.errorMessage=errorMessage;
	}
	public String toString() {
		return errorMessage;
		
	}
}
interface Sports{
	void getNumberOfGoals();
	void dispTeam();
}
class Hockey implements Sports{
	int hGoals;
	String hName;
	public Hockey() {
		Scanner scan = new Scanner(System.in);
		try {
			System.out.println("enter Hockey team name: ");
			hName=scan.next();
			System.out.println("enter no of goals: ");
			hGoals=scan.nextInt();
			
			if (hGoals<0) {
				throw new GoalsCannotbeNegativeException("Exception: Goals cannot be negative");
			}
		} catch (Exception e) {
			System.out.println("Exception: "+e);
		}
	}
	public void getNumberOfGoals() {
		if (hGoals>=0) {
			System.out.println("Number of Goals are: " + hGoals) ;
		}
		else {
			System.out.println("Number of Goals are: " + "0") ;
		}
		}
	public void dispTeam() {
		System.out.println("Name of the Team is: " + hName) ;
		}
}
class Football implements Sports{
	int fGoals;
	String fName;
	public Football() {
		Scanner scan=new Scanner(System.in);
		try {
			System.out.println("\nenter Football team name: ");
			fName=scan.next();
			System.out.println("enter no of goals: ");
			fGoals=scan.nextInt();
			
			if (fGoals<0) {
				throw new GoalsCannotbeNegativeException("Goals cannot be negative");
			}
		} catch (Exception e) {
			System.out.println("Exception: "+e);
		}
	}
	public void getNumberOfGoals() {
		if (fGoals>=0) {
			System.out.println("Number of Goals are: " + fGoals) ;
		}
		else {
			System.out.println("Number of Goals are: " + "0") ;
		}
	}
	public void dispTeam() {
		System.out.println("Name of the Team is: "+ fName) ;
		}
}
	
public class Interface {
	public static void main(String[] args) {
		Hockey obj1 = new Hockey();
		obj1.dispTeam();
		obj1.getNumberOfGoals();
		
		try {
			Thread.sleep(1000);
		} catch (Exception e) {
			// TODO: handle exception
		}
		
		Football obj2=new Football();
		obj2.dispTeam();
		obj2.getNumberOfGoals();
	}
}

