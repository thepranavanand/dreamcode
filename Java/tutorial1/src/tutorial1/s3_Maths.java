package tutorial1;

// double p = Math.pow(x, y);

import java.util.Scanner;

public class s3_Maths {

	public static void main(String[] args) {
		
		double ht;
		double base;
		double hypo;
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter height: ");
		ht = scanner.nextDouble();
		System.out.println("Enter base: ");
		base = scanner.nextDouble();
		System.out.println("Hypotenuse is: ");
		hypo = Math.sqrt((ht)*(ht) + (base)*(base));
		
		System.out.println(hypo);
		
		scanner.close();
		
		
		
		
//		double x = 3.14;
//		double y = -10;
//		double z = 225;
		
//		double a = Math.max(x, y);
//		double b = Math.abs(y); //Finds the absolute of a number
//		double c = Math.sqrt(z);
//		double d = Math.round(x); //Rounds the integer
//		double e = Math.ceil(x); // Rounds up
//		double f = Math.floor(x); // Rounds down
//		System.out.println(a+" "+b+" "+c+" "+d+" "+e+" "+f);
		
	}

}
