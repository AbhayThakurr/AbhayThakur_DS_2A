#include <iostream>
using namespace std;
void main()
{
    int m, n, o;
    cout << "Enter no of rows,columns and pages \n";
    cin >> m >> n >> o;
    int a[m][n][o], *original, i, j, k, x, y;
    cout << "Enter the index(i,j,k) \n";
    cin >> i >> j >> k;
    original = &a[i][j][k];
    x = a + i;
    x = x + (j * o * sizeof(a[i][j][k]));
    x = x + (k * sizeof(a[i][j][k]));
    cout << x << " is the xress of " << i << j << " indexed element \n";
    if (original == x)
        cout << "Verified";
}
