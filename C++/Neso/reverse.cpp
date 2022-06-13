#include <iostream>
#include <climits>
using namespace std;

class reverse
{
public:
    int rev(int num)
    {
        int fnum = 0;
        while (num != 0)
        {
            int temp = num % 10;
            if ((fnum > INT_MAX / 10) || (fnum < INT_MIN / 10))
            {
                return 0;
            }
            fnum = (fnum * 10) + temp;
            num = num / 10;
        }
        return fnum;
    }
};

int main()
{
    int a;
    cin >> a;
    reverse obj;
    int rev = obj.rev(a);
    cout << rev;
    return 0;
}