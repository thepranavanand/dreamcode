import java.io.FileInputStream;
import java.io.ObjectInputStream;
import java.io.FileOutputStream;
import java.io.ObjectOutputStream;

class jdbc {
    public static void Main(String[] args) {
        int i = 5;
        String str = "Hello";
        try {
            FileOutputStream obj1 = new FileOutputStream("f.txt");
            ObjectOutputStream fw = new ObjectOutputStream(obj1);

            fw.writeInt(i);
            fw.writeObject(str);

            FileInputStream obj2 = new FileInputStream("f.txt");
            ObjectInputStream fw2 = new ObjectInputStream(obj2);

            System.out.println(fw2.readInt());
            System.out.println(fw2.readObject());

            fw.close();
            fw2.close();

        } catch (Exception e) {
            e.getStackTrace();
        }

    }
}