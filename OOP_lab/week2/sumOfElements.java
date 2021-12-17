package week2;
import java.util.Scanner;
public class sumOfElements {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter size of array: ");
		int size = scan.nextInt();
		float arr[] = new float[size];
		float sum = 0;
		for(int i=0;i<arr.length;i++) {
			System.out.println("Enter element-"+(i+1)+": ");
			try {
				arr[i] = scan.nextFloat();
				sum = sum + arr[i];
			}catch(InputMismatchException e) {
				System.out.println(e);
			}catch(ArrayOutOfBounds e) {
				System.out.println(e);
			}catch(Exception e) {
				System.out.println(e);
			}
		}
		System.out.println("Sum of the array elements: "+sum);
	}

}
