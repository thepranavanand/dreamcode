// Rev
//  #include<iostream>
//  #include<climits>
//  using namespace std;

// class fun1{
//     public:
//     int func(int n)
//     {
//         int temp, fnum = 0;
//         while(n!=0)
//         {
//             temp = n%10;
//             if(fnum<INT_MIN/10 || fnum>INT_MAX/10)
//                 return 0;
//             fnum = fnum*10 + temp;
//             n = n/10;
//         }
//         return fnum;
//     }
// };

// int main (){
//     int num, fnum;
//     cin >> num;
//     fun1 obj;
//     fnum = obj.func(num);
//     cout<<fnum;
//     return 0;
// }

// Complement
// #include <iostream>
// using namespace std;

// class fun1
// {
// public:
//     int func(int n)
//     {
//         int m = n;
//         int mask = 0;
//         if(n==0)
//         {
//             return 1;
//         }
//         while (n != 0)
//         {
//             mask = mask << 1 | 1;
//             n = n >> 1;
//         }
//         int forest = (~m) & mask;
//         return forest;
//     }
// };

// int main()
// {
//     int fun, a;
//     cin >>a;
//     fun1 obj;
//     fun = obj.func(a);
//     cout << fun;
//     return 0;
// }

// power of two
#include <iostream>
#include <climits>
using namespace std;

class fun1
{
public:
    bool func(int n)
    {
        int num = 1;
        for (int i = 0; i < 31; i++)
        {
            if (num == n)
                return true;
            if (num <= INT_MAX / 2)
                num = num * 2;
        }
        return false;
    }
};

int main()
{
    int num, fun;
    cin >> num;
    fun1 obj;
    fun = obj.func(num);
    cout << fun;
    return 0;
}