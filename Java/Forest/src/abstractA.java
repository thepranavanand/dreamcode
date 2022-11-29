// import java.net.InetAddress;

// public class App {
//   public static void main(String args[]) throws Exception {
//     InetAddress localhost = InetAddress.getLocalHost();
//     System.out.println("System IP Address : " +
//         (localhost.getHostAddress()).trim());
//   }
// }

abstract class Dog{
  String breed;
  public void bark(){
    System.out.println("Bark!");
  }

  public abstract void eat(); //If we remove this, the code will keep working. So why should we use it? We make abstract functions to ensure inherited class has these methods defined.
}

class fluck extends Dog{
  public void eat(){
    System.out.println("Pedigree!");
  }
}
class hell extends Dog{
  public void eat(){
    System.out.println("F00D!");
  }
}

public class abstractA{
  public static void Main(String args[]){
    hell d = new hell();
    d.bark();
    d.eat();
  }
}