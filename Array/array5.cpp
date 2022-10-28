#include <iostream>
using namespace std;
int missingNumber(int arr[], int x)
{
    int length;
    length = ((x + 1) * (x + 2)) / 2;
    for (int i = 0; i < x; i++)
        length -= arr[i];
    return length;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n - 1];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int missingNumber = missingNumber(arr, 5);
    cout << "Missing Number is: " << missingNumber;
    return 0;
}