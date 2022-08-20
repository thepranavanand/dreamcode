#include <iostream>
using namespace std;
int main()
{
    //     int a = 5;
    //     while(!a){ !a means a==0
    //         cout<<1;
    //     }
    // }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> vec;
        int x = n;
        int mn = 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                cout << x-- << " ";
            }
            else
            {
                cout << mn++ << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}