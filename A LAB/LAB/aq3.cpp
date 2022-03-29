#include<iostream>
#include<conio.h>
using namespace std;
 
class alpha
{
    int x;
    public:
    alpha(int i)
    {
        x=i;
        cout<<"alpha initialized... \n";
    }
    void show_x()
    {
        cout<<"x="<<x<<"\n";
    }
};
 
class beta
{
    float y;
    public:
    beta(float j)
    {
        y=j;
        cout<<"beta initialized...\n";
    }
    void show_y()
    {
        cout<<"y="<<y<<"\n";
    }
};
 
class gamma : public beta,public alpha
{
    int m,n;
    public:
    gamma(int a,float b,int c,int d): alpha(a),beta(b)
    {
        m=c,n=d;
        cout<<"gamma initialized...\n"<<endl;
    }
    void show()
    {
        cout<<"m="<<m<<"\n";
        cout<<"n="<<n<<"\n";
    }
};
 
int main()
{
    cout<<"Pranav Anand"<<endl;
    cout<<"UID: 21BCS7719"<<endl;
    cout<<"\n\n"<<endl;
    gamma g(7,98.35,21,57);
    g.show_x();
    g.show_y();
    g.show();
    return 0;
}
