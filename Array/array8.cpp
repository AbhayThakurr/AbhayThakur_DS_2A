#include <iostream>
using namespace std;

void merge(int a[], int b[], int n, int m)
{

    int c[200];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n && j < m)
    {

        if (a[i] < b[j])
        {

            c[k++] = a[i++];
        }
        else
        {

            c[k++] = b[j++];
        }
    }

    while (i < n)
    {

        c[k++] = a[i++];
    }

    while (j < m)
    {

        c[k++] = b[j++];
    }

    for (int s = 0; s < k; s++)
    {

        cout << c[s] << " ";
    }
}

int main()
{

    int a[100], b[100], n, m;

    cout << "Enter the length of first array \n";
    cin >> n;

    cout << "Enter the length of second array \n";
    cin >> m;

    cout << "Enter sorted values for first array \n";

    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }

    cout << "Enter sorted values for second array \n";

    for (int j = 0; j < m; j++)
    {

        cin >> b[j];
    }

    merge(a, b, n, m);

    return 0;
}