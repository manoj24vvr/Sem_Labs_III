package week2;
import java.util.Scanner;
import java.util.Arrays;

public class matrixMultiplication {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		int n = 2;
		// n is the size of the matrix.
		int[][] m1 = new int[n][n];
		int[][] m2 = new int[n][n];
		int[][] m3 = new int[n][n];
		
		System.out.println("Enter elements of 1st matrix: ");
		
		try {
			for(int i=0;i<n;i++) {
				for (int j=0;j<n;j++) {
					m1[i][j] = scan.nextInt();
				}
			}
		}catch(Exception e) {
			System.out.println(e);
		}
		System.out.println("Enter elements of 2nd matrix: ");
		try {
			for(int i=0;i<n;i++) {
				for (int j=0;j<n;j++) {
					m2[i][j] = scan.nextInt();
				}
			}
		}catch(Exception e) {
			System.out.println(e);
		}
		
		for(int i=0;i<n;i++) {
			for(int j=0;j<n;j++) {
				for(int k=0;k<n;k++) {
					m3[i][j] = m3[i][j] + m1[i][k] * m2[k][j];
				}
			}
		}
		
		System.out.println("Product Matrix is: ");
		for (int i = 0; i < n; i++) {
			for(int j = 0;j<n;j++) {
				System.out.println(m3[i][j] + " ");
			}
			System.out.println();
		}
	}

}
