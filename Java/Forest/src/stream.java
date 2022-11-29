import java.io.FileOutputStream;

class stream {
    public static void Main(String args[]) {
        String str = "Hey there mate";
        try {
            FileOutputStream obj = new FileOutputStream("output.txt");
            byte[] arr = str.getBytes();
            obj.write(arr);
            obj.close();
        } catch (Exception e) {
            e.getStackTrace();
        }
    }
}
















// import java.io.InputStream;
// import java.io.FileInputStream;

// public class stream {
// public static void main(String args[]) {
// byte[] arr = new byte[100];
// try{
// InputStream input = new FileInputStream("input.txt");
// System.out.println("Available bytes: " + input.available());
// input.read(arr);
// String hell = new String(arr);
// System.out.println(hell);
// input.close();
// } catch (Exception e){
// e.getStackTrace();
// }
// }
// }
