#include <iostream>
using namespace std;

int binarySearch(int N)
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
double sqRoot(int N, int precision)
{
    double tempNum = binarySearch(N);
    double factor = 1;
    double ans;
    for (double i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = tempNum; j*j< N; j += factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{
    int num, precision;
    cin >> num >> precision;
    cout << sqRoot(num, precision);
}