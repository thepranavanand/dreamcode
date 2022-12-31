class ama {
    private int data = 30;

    class Inner {
        void msg() {
            System.out.println("data is " + data);
        }
    }

    public static void main(String args[]) {
        ama obj = new ama();
        ama.Inner in = obj.new Inner();
        in.msg();
    }
}

















// import java.awt.*;

// class First extends Frame {

// First() {

// Button b = new Button("click me");
// b.setBounds(30, 100, 80, 30);
// add(b);
// setSize(300, 300);
// setLayout(null);
// setVisible(true);

// }

// public static void main(String args[]) {

// First f = new First();

// }
// }
