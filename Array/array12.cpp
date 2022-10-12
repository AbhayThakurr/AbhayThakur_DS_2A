#include <iostream>
using namespace std;
int main()
{
    int m, n;
    int a[100], b[100], c[100];

    cout << "Enter no. of elements in array A \n";
    cin >> n;
    cout << "Enter no. of elements in array B \n";
    cin >> m;

    cout << "Enter elements of A: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter elements of B: \n";
    for (int j = 0; j < m; j++)
    {
        cin >> b[j];
    }
    int k, i, j;
    cout << "Difference of A and B are \n";
    for (int i = 0; i < n; i++)
    {
        k = 0;
        for (int j = 0; j < m; j++)
        {

            if (a[i] == b[j])
            {
                k++;
            }
        }
        if (k == 0)
        {
            cout << a[i] << " ";
            cout << endl;
        }
    }
    cout << "Difference of B and A are \n";
    for (int i = 0; i < m; i++)
    {
        k = 0;
        for (int j = 0; j < n; j++)
        {

            if (b[i] == a[j])
            {
                k++;
            }
        }
        if (k == 0)
        {
            cout << a[i] << " ";
            cout << endl;
        }
    }

    return 0;
}