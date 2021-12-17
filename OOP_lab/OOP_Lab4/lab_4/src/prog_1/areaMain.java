package prog_1;
import java.util.Scanner;
import java.util.InputMismatchException;

class area {
	Scanner in = new Scanner(System.in);
	static double height;

	void Height() {
		System.out.print("Enter height of triangle: ");
		try {
			height = in.nextDouble();
			if (height <= 0) {
				throw new InputMismatchException("Dimensions must be positive values");
			}
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
	}
}

class Triangle extends area {
	Scanner in = new Scanner(System.in);
	static double base, area;

	void calArea() {
		System.out.print("Enter Base: ");
		
		try {
			base = in.nextDouble();
			if (base <= 0) {
				throw new InputMismatchException("Dimensions must be positive values");
			}
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		area =  0.5 * base * height;
		System.out.println("Area of the triangle is: " + area);
		if (area <= 0) {
			throw new InputMismatchException("Area cannot be negative");
		}
	}
}
class Rectangle extends area {
	Scanner in = new Scanner(System.in);
	static double width, length, area;

	void calArea() {
		System.out.print("Enter Width and length: ");
		
		
		try {
			width = in.nextDouble();
			if (width<= 0) {
				throw new InputMismatchException("Dimensions must be positive values");
			}
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		try {
			length = in.nextDouble();
			if (length<= 0) {
				throw new InputMismatchException("Dimensions must be positive values");
			}
		}catch(InputMismatchException e) {
			System.out.println(e);
		}
		area = width * length;
		System.out.println("Area of rectangle: " + area);
		
	}
}
public class areaMain {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Triangle triangle = new Triangle();
		Rectangle rectangle = new Rectangle();
		triangle.Height();
		triangle.calArea();
		rectangle.calArea();
	}

}
