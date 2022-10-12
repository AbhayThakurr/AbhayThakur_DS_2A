#include <iostream>
using namespace std;

int main()
{
    int a[100], output[100], n, i;

    cout << "Enter number of elements in array\n";
    cin >> n;

    cout << "Enter " << n << " numbers \n";

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        output[i] = a[n - i - 1];
    }

    cout << "Reversed Array\n";
    for (i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }

    return 0;
}