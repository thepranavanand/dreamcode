package tutorial1;
import java.util.Random;
public class Random_ {

	public static void main(String[] args) {
		Random random = new Random();
		
//		int num = random.nextInt(6)+1; //Whatever we write inside the paranthesis of nextInt(), lets say 6 now, the random number generated will be from 0 to 5. So to make it upto six, we can write 7 there or, add a "+1" after nextInt(); 
		
//		double fun = random.nextDouble();
		
		boolean x = random.nextBoolean();
		System.out.println(x);

	}

}
