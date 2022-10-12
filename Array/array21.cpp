#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the value of n \n";
    cin >> n;

    cout << "Enter the value of m \n";
    cin >> m;
    int a[m][n];
    cout << "Enter elements of matrix \n";
    int i, j;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "Transpose of matrix is \n";
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cout << a[j][i];
        }
        cout << "\n";
    }
    return 0;
}
