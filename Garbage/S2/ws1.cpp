#include <iostream>
using namespace std;

int main()
{
    int i, j, m, n, b = 1000, W;
    int a[100][100];
    cout << "Enter the number of rows :\n";
    cin >> m;
    cout << "Enter the number of columns :\n";
    cin >> n;
    cout << "Enter all the elements :\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Enter the storage size of one element stored in array :\n";
    cin >> W;
    i = m - 1;
    j = n - 1;
    cout << "address of A[i][j] is :\n" << b + W * (n * i + j);
    return 0;
}

/*
#include<iostream>
using namespace std;
int main ()
{
    int m, n;
    cin>>m>>n;
    int i, j, num[m][n], B = 1000;
    for(i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
        cin>>num[i][j];
        }
    }
    int W = sizeof(num[m-1][n-1]);
    cout << B*(m-1)*n+(n-1)*W;
    return 0;
}
*/