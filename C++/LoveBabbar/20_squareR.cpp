#include <iostream>
using namespace std;

int sqRoot(int N)
{
    int start = 0;
    int end = N;
    int temp = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        int square = mid * mid;
        if (N == square)
        {
            return mid;
        }
        if (N > square)
        {
            temp = mid;
            start = mid + 1;
        }
        if (N < square)
        {
            end = mid - 1;
        }
    }
    return temp;
}

int main()
{
    int num;
    cin >> num;
    cout << sqRoot(num);
}