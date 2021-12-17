package week2;

import java.util.Scanner;
import java.util.Arrays;

public class sum {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt(); // n is the size of the Array.
		int sum = 0;
		int array[] = new int[n];
		System.out.println("Enter the elements of the array: ");
		for(int i=0; i<n ; i++) {
			array[i] = scan.nextInt();
		}
		int rem = n % 2;
		if(rem == 0) {
			sum = array[0] + array[n-1];
			System.out.println("Size of the given array is "+n+"(Even)");
			System.out.println("Required sum is: "+sum);
		}else {
			sum = array[0] + array[n-1] + array[(n-1)/2];
			System.out.println("Size of the given array is "+n+"(Odd)");
			System.out.println("Required sum is: "+sum);
		}
	}
}
