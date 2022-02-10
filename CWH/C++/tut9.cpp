// ******* NOTE : STRINGS ARE NOT ALLOWED IN SWITCHCASE IN C++ *******

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Please enter your age"<<endl;
    cin>>age;
    // if(age < 18){
    //     cout<<"You are not eligible for entry in party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are allowed but you'll not be allowed for drinks"<<endl;
    // }
    // else{
    //     cout<<"You are welcome to the party"<<endl;
    // }
    switch (age)
    {
    case 18:
        cout<<"You are allowed but you'll not be allowed for drinks";
        break;
    case 22:
        cout<<"You are welcome to the party";
        break;
    case 2:
        cout<<"Seriously?? Are you kidding me??";
        break;
    
    default:
        cout<<"no case matches";
        break;
    }

return 0;
}