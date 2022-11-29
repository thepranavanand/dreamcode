import java.awt.*;
import java.awt.event.*;
public class q {
    public void search() {
        System.out.println("Searching...");
    }
    public void sort() {
        System.out.println("Sorting....");
    }
    public void delete(){
        System.out.println("Deleting....");
    }
    static public void main(String args[]) {
        q app = new q();
        GUI gui = new GUI(app);
    }
}
class Command implements ActionListener  {
    static final int SEARCH = 0;
    static final int SORT = 1;
    static final int DELETE =2;
    int id;
    q app;
    public Command(int id, q app) {
        this.id = id;
        this.app = app;
    }
    public void actionPerformed(ActionEvent e) {
        switch(id) {
            case SEARCH:
                app.search();
                break;
            case SORT:
                app.sort();
                break;
            case DELETE:
                app.delete();
        }
    }
}
class GUI {
    public GUI(q app) {
        Frame f = new Frame();
        f.setLayout(new FlowLayout());
        Command searchCmd = new Command(Command.SEARCH, app);
        Command sortCmd = new Command(Command.SORT, app);
        Command deleteCmd = new Command(Command.DELETE, app);
        Button b;
        f.add(b = new Button("Search"));
        b.addActionListener(searchCmd);
        f.add(b = new Button("Sort"));
        b.addActionListener(sortCmd);
        f.add(b = new Button("Delete"));
        b.addActionListener(deleteCmd);
        List l;
        f.add(l = new List());
        l.add("Coding Ninjas");
        l.add("CodeStudio");
        l.addActionListener(sortCmd);
        f.pack();
        f.show();
    }
}