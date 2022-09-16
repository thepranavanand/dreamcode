class Colour
{
    void fav() { System.out.println("blue..."); }
} class Color extends Colour
{
    void show() { System.out.println("red..."); }
} class assignment
{
public
    static void main(String args[])
    {
        Color d = new Color();
        d.show();
        d.fav();
    }
}