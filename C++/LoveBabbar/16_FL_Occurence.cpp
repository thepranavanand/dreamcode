#include <iostream>
using namespace std;

void occurence(int *arr, int N, int key)
{
    int in = 0, en = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == key)
        {
            in = i;
            en = i;
            break;
        }
        in = -1;
    }
    if (in != -1)
    {
        for (int i = in; i < N; i++)
        {
            if (arr[i] == key)
            {
                en++;
            }
        }
    }
    en = en - 1;
    cout << "initial location is " << in << " and last occurence is " << en;
}

int main()
{
    int key;
    cin >> key;
    int arr[6] = {2, 4, 5, 8, 10, 12};
    occurence(arr, 6, key);
}