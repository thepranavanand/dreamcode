#include <iostream>
using namespace std;

int main()
{
    int ans=0, enter=0;
    // cout << "Enter count till which sum is to be calculated : ";
    // cin >> a;
    // int count = 1, sum = 0,sam = 0;

    // //1
    // while (count <= a)
    // {
    //     sum += count;
    //     count += 1;
    // }
    // cout << "sum from 1 to "<< a<<" is "<< sum << endl;

    //2
    // for(int s = 1; s<=10;s++){
    //     sam+=s;
    // }
    // cout<<sam;

    //3
    for( int i = 0; i<3; i++){
        cin>>enter;
        ans+=enter;
    }
    cout<<ans;
    return 0;
}