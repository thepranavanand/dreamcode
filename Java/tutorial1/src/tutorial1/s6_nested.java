package tutorial1;

import java.util.Scanner;

public class nested {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int row; 
		int col;
		String symbol;
		
		System.out.println("Enter number of rows: ");
		row = scanner.nextInt();
		System.out.println("Enter number of columns: ");
		col = scanner.nextInt();
		System.out.println("Enter the symbol to print");
		symbol = scanner.next();
		for(int i = 0; i<row; i++) {
			for(int j = 0; j< col; j++) {
				System.out.print(symbol+" ");
			}
			System.out.println(" ");
		}

	}

}
