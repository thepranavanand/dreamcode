#include<iostream>
using namespace std;
    // string languages[3] = {"C++","Java","Python"};
    // string &groot = languages[0];
    // string* brut = &groot;
    // cout<< &languages<<endl;
    // cout<<groot<<"\n";
    // cout<<*brut<<"\n";
    // cout<<brut<<"\n";
    // cout<<"Enter a random number.."<<endl;
    // cin>>x;
    // if (x>7){
    //     cout<<languages[0]<<endl;
    // }else{
    //     cout<<languages[1]<<endl;
    // }
    // for (int i=0;i<3;i++){
    //     cout<<languages[i]<<"\n";
    // }

    
// string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
// for(int i= 0; i< 4; i++) {
//     cout << cars[i]<< "\n";
//     }



// void flag();

// int main(){
//     flag();
//     return 0;
// }

// void flag(){
//     cout<<"Indian Flag";
// }

// HERE CODE RUNS TWO TIMES BECAUSE OF TWO STRING MAODELS //
/*int budget;
void Laptop(string Model="Air M1"){
    cout<<"Enter your budget range\n";
    cin>>budget;
    if(budget>70000){
        cout<<"Macbook "<< Model;
    }else{
        cout<<"Any Laptop with SSD and minimum 4GB Graphics\n";
    }
}
int main(){
    Laptop("Air M1\n");
    Laptop();
    Laptop("Pro M1");
    return 0;
}*/

// void marker(string colour, int quantity){
//     cout<<"There are " <<quantity<<colour<<"markers.\n";
// }

// int main(){
//     marker(" black ",2);
//     marker(" blue ",1);
//     return 0;
// }

void experiment(int &x, int &y) {
    int z=x;
        x=y;
        y=z; 
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  experiment(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}