#include <iostream>
using namespace std;
int main()
{
    int ch;
    FILE *fs, *ft;
    fs = fopen("D:/forest.txt", "r");
    if (fs == NULL)
    {
        cout << "\nError Occurred!";
        return 0;
    }
    ft = fopen("D:/grass.txt", "w");
    if (ft == NULL)
    {
        cout << "\nError Occurred!";
        return 0;
    }
    ch = fgetc(fs);
    while (ch != EOF)
    {
        fputc(ch, ft);
        ch = fgetc(fs);
    }
    cout << "\nFile copied successfully.";
    fclose(fs);
    fclose(ft);
    cout << endl;
    return 0;
}