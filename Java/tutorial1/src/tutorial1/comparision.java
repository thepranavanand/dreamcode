package tutorial1;
import java.util.Scanner;

public class comparision {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.println("What do you want to compare:\n1.String\n2.Integer");
		int choice= in.nextInt();
		if(choice==1) {
			System.out.println("Enter two strings to compare: ");
			String str1 = in.next();
			String str2 = in.next();
			System.out.println("Entered strings are: "+ str1 +" and "+str2);
			if(str1.equals(str2)) {
				System.out.println("Both the strings are equal.");//str1==str2 doesn't work when string is taken as input from the user
			}
			else {
				System.out.println("Both the strings are unequal.");
			}//str1==str2 doesn't work when string is taken as input from the user
			
//			if(str1==str2) {
//				System.out.println("Both the strings are equal.");
//			}
//			if(str1!=str2) {
//				System.out.println("Both the strings are unequal.");
//			}
		}
		
		if(choice==2) {
			System.out.println("Enter two numbers to compare: ");
			int num1 = in.nextInt();
			int num2 = in.nextInt();
			if(num1 > num2) {
				System.out.println(num1+" is greater than "+num2);
			}
			if(num1 < num2) {
				System.out.println(num1+" is smaller than "+num2);
			}
			if(num1 == num2) {
				System.out.println(num1+" is equal to "+num2);
			}
			if(num1 != num2) {
				System.out.println(num1+" is not equal to "+num2);
			}
		}
	}

}
