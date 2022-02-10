#include<iostream>
using namespace std;

int main(){
    //Array Example
    int marks[4]  = {23,65,25,85};
    int mathMarks[4];
    mathMarks[0] = 9835;
    mathMarks[1] = 785;
    // This way, we can change the value;
    mathMarks[1] = 185;
    mathMarks[2] = 615;
    mathMarks[3] = 135;
    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"These are mathMarks"<<endl<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl;*/

    /*for (int i=0; i<4; i++){
        cout<<mathMarks[i]<<endl;
    }*/



    /*int i=0;
    while(i<4){
        cout<<marks[i]<<endl;
        i++;
    }*/

    int  i=0;
    do{
        cout<<"Marks in subject "<<i+1<<" is : "<< mathMarks[i]<<endl;
        i++;
    }
    while (i<4);
    return 0;
}

// Continue From #13 --> 11:57