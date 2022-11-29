import java.io.OutputStream;
import java.io.FileOutputStream;

class heldd{
    public static void Main(String [] df){
        String str = "Hello there!";
        try{
            OutputStream obj = new FileOutputStream("f.txt"); //same as FileOutputStream.
            byte[] arr = str.getBytes();
            obj.write(arr);
            obj.close();
        } catch(Exception e){
            e.getStackTrace();
        }
    }
}