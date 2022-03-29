#include <iostream>
#include <conio.h>
using namespace std;

class student
{
    int nRoll;

public:
    void getnumber()
    {
        cout << "Enter Roll No: ";
        cin >> nRoll;
    }
    void putnumber()
    {
        cout << "\n\tRoll No: " << nRoll << "\n";
    }
};

class test : virtual public student
{
public:
    int part1, part2;
    void getmarks()
    {
        cout << "\nEnter Marks\n";
        cout << "Part1:";
        cin >> part1;
        cout << "Part2:";
        cin >> part2;
    }
    void putmarks()
    {
        cout << "\n\tMarks Obtained";
        cout << "\n\tPart1:" << part1;
        cout << "\n\tPart2:" << part2;
    }
};

class sports : public virtual student
{
public:
    int score;
    void getscore()
    {
        cout << "Enter Sports Score: ";
        cin >> score;
    }
    void putscore()
    {
        cout << "\n\tSports Score is:" << score;
    }
};

class result : public test, public sports
{
    int total;

public:
    void display()
    {
        total = part1 + part2 + score;
        putnumber();
        putmarks();
        putscore();
        cout << "\n\n\tTotal Score:" << total << ":)";
    }
};

int main()
{
    cout << "Pranav Anand" << endl;
    cout << "UID: 21BCS7719\n"
         << endl;
    result obj;
    obj.getnumber();
    obj.getmarks();
    obj.getscore();
    obj.display();
    return 0;
}
