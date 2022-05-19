#include<iostream> 
using namespace std;
class forest
{
   int a=5;
public:
   // forest()
   // {
   //    a = 5;
   // }
   void display()
   {
      cout << a <<endl;
   }
   friend void func(forest &o);
};

void func(forest &o)
{
   o.a = o.a - 5;
}
int main()
{
   forest obj;
   obj.display();
   func(obj);
   obj.display();
}