/* Q. Which code snippet is better ?

If (hours < 24 && minutes < 60)
{
  return true;
}
else
{
  return false;
}

OR

return hours < 24 && minutes < 60
*/


#include<iostream>
using namespace std;


inline int s(int hours ,int minutes){
  return hours < 24 && minutes < 60;
}

int main(){
    int hours, minutes;
    cout<<"Enter hours and minutes"<<endl;
    cin>>hours>>minutes;
    cout<<s(hours, minutes); 
    return 0;
} 