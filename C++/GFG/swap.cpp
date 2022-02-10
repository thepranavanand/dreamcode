#include<iostream>
using namespace std;

    class Triangle {
        public:
            int Area = 5, Perimeter = 3;
            void Ar(){
                cout<<Area;
            }
            void Pe(){
                cout<<Perimeter;
            }
    };
        int main (){
            Triangle Exp;
            Exp.Ar();
            Exp.Pe();
            // cout<<Exp.Ar<<endl<<Exp.Pe<<endl;
            return 0;
    }