#include<iostream>
using namespace std;

int main ()
{
    int i = 0, j = 1, t, num1, sum = 0;
    cout<<"Enter number of terms :\n";
    cin>>t;
    cout<<i<<j;
    while(t--)
    {
        cout<<i+j;
        i = j;
        j = i+j;
    }
    return 0;

}




mammmmm

#include<iostream>



using namespace std;



int main()



{



int n,c,first=0,second=1,next;



int a[50];//defined an array

int i,j=0,count=0;



cout<<"Enter the no. of terms of Fibonacci series=";



cin>>n;//6



cout<<"Terms of Fibonacci series are"<<endl;



for(c=0;c<n;c++)//5<6



{



if(c<=1)//3<=1



next =c;//1



else



{



next=first+second;//next=5



first=second;//first=3



second=next;//second=5



}



cout<<next<<endl;// 0 1 1 2 3 5



if(next-first>1)//differnce btw 5 -3=2



{



for(i=first+1; i<next; i++)//5<5



{



a[j]=i;//a[0]=4



count++;//1



j++;//1



}



}



}



cout<<"Missing numbers of the Fibonacci series are:"<<endl;



for(j=0; j<count; j++)//0<1



cout<<a[j]<<endl;//a[0]=4//4



return 0;



}