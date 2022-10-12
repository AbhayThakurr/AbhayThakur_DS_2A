#include <iostream>
using namespace std;
void main()
{
    int n;
    cout << "Enter size of array \n";
    cin >> n int a[n];
    int *original, x, y, i;
    cout << "Enter the index";
    cin >> i;
    original = &a[i];
    x = a + i;
    cout << x << "is the xress of " << i << "th element \n";
    if (original == x)
        cout << "Verified";
}