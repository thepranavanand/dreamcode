import java.io.FileInputStream;
public class ama {
    public static void Main(String[] args) {
        try{
                FileInputStream obj = new FileInputStream("f.txt");
                int i = obj.read();
                while(i!=-1){
                    System.out.print((char)i);
                    i = obj.read();
                }
                obj.close();
        } catch(Exception e){
            e.getStackTrace();
        }
    }
}
