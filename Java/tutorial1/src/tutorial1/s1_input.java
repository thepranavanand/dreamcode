
import java.util.Scanner;

public class s1_input {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
Scanner fun = new Scanner(System.in);
		
//		//String input
//		String fun1 = fun.next();
//		System.out.println(fun1);
//		
//		//Integer input
//		int dum = fun.nextInt();
//		System.out.println(dum);
//		
//		//boolean input
//		boolean mess = fun.nextBoolean();
//		System.out.println(mess);
//		
//		//Double input
//		double drm = fun.nextDouble();
//		System.out.println(drm);
		
		//Instead of doing these separately for every data type, we can take all inputs as string and later change them as we want.
		String hel = fun.next();
		int num = Integer.parseInt(hel);
		System.out.println(num);
		
	}
}