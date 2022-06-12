#include <iostream>
using namespace std;
int main()
{
    int ans = 1e9, enter;

        for (int i = 0; i < 3; i++)
    {
        cin >> enter;
        ans = min(ans, enter);
    }
    cout << ans;
    return 0;
}