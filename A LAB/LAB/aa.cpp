#include <iostream>    
#include <iomanip>     
using namespace std;
int main ()
{
  double float_value =3.14159;
  cout << float_value << setprecision(3) << float_value << fixed << setprecision(3) << float_value << '\n';
  return 0;
}