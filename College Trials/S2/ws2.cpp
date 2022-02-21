#include <iostream>
using namespace std;

class employee
{
    char name[20];
    int age;
    char des[20];
    double salary;
public:
    void getData();
    void putData();
};

void employee ::getData()
{
    cout << "Enter employee name :\n";
    cin >> name;
    cout << "Enter employee age :\n";
    cin >> age;
    cout << "Enter employee designation :\n";
    cin >> des;
    cout << "Enter employee salary :\n";
    cin >> salary;
}

void employee ::putData()
{
    cout << "\nEmployee Name : " << name;
    cout << "\nEmployee Age : " << age;
    cout << "\nEmployee Designation:" << des;
    cout << "\nEmployee Salary : " << salary;
}

int main ()
{
    employee E[3];
    int i;
    for(i = 0; i<3; i++)
    {
        E[i].getData();
    }
    for(i = 0; i<3; i++)
    {
        E[i].putData();
    }
    return 0;
}