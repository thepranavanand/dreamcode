package tutorial1;

import java.util.Scanner;

public class logicalOp {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner (System.in);
		String arr1 = scanner.next();
		String arr2 = scanner.next();
		if(arr1.equals(arr2)){ // equals() work only in case of non primitive.
			System.out.println("Equal");
		}else {
			System.out.println("Unequal");
		}
	}

}
