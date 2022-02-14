/*#include<iostream>
using namespace std;
int main (){
    cout<<"Hello World"<<endl;
    cout<<"Hello World\n";
    cout<<"Hello \t World";
    return 0;
}
// This session is just to boost my confidence
/* Enough of forgetting who I am. Now it'll be whatever I want.

#include<iostream>
using namespace std;
int main (){
    int a = 6;
    float b = 4.6;
    char c = 'c';
    string d = "dear";
    bool e = " true";
    cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
    return 0;
}


#include<iostream>
using namespace std;
int a = 5, b = 9, c = 37;
int main (){
    cout<<a+b+c;
    return 0;
}

#include<iostream>
using namespace std;
int main (){
    const int a = 7;
    // a = 10; //will throw error because of const previously.
    cout<<a;
    return 0;
}

#include<iostream>
using namespace std;
int main (){
int a;
cin>>a;
cout<<a+a+a;
return 0;
}

#include <iostream>
using namespace std;
int a, b;
int main()
{
    cin >> a;
    cin >> b;
    int op;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << a + b;
        break;
    case 2:
        cout << a - b;
        break;
    case 3:
        cout << a*b;
        break;
    case 4:
        cout<< a/b;
        break;
    case 5:
        cout<< a%b;
        break;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main (){
    bool good = true;
    bool bad = false;
    cout<<good<<" "<<bad;
    return 0;
}

#include<iostream>
using namespace std;
int main (){
    char i = 6, a[20] = {80, 82, 65, 78, 65, 86}; 
    cout<<a; //prints the ath character.
    return 0;
}

#include<iostream>
using namespace std;
int main (){
    string car = "lameboredghini";
    cout<<car;
    return 0;
}


#include<iostream>
using namespace std;
int main (){
    string mystring = "Hell";
    mystring[3] = 'P';
    cout<<mystring;
    return 0;
}
*/

#include <iostream>
using namespace std;

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}