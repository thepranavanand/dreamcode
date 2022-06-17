package tutorial1;
import java.util.Scanner;
public class gotoReplacement {
	Scanner in = new Scanner(System.in);
	String mess = in.next();
	if(mess=="Hello") {
		break greet;
	}
	greet:
	{
		System.out.println("Hiiii");
	}
}
