package tutorial1;
import java.util.Scanner;
public class StringScan {

	public static void main(String[] args) {
	    String fun1, fun2;
	    int num;
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter your name: ");
		fun1 = scanner.nextLine();
		System.out.println("Enter your age: ");
		num = scanner.nextInt();
		scanner.nextLine(); // Here, we have to include this line because "nextLine" also takes \n as input when we press enter key after the desired input we enter. After which if we call this again, that \n was already stored so it gets inside the second time and compiler jumps to next command.
		System.out.println("Enter your favourite pet: ");
		fun2 = scanner.nextLine();
		System.out.println("Your name is: "+fun1);
		System.out.println("Your age is: "+num);
		System.out.println("Your favourite pet is: "+fun2);
	}

}
