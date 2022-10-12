#include<iostream>
using namespace std;
int main(){
    int n, arr[100];
    int temp =0;
    cout<<"Enter the value of n \n";
    cin>>n;

    cout<<"Enter the element of array \n";
    for(int i =0 ; i < n ; i++){
        cin>>arr[i];
    }
    for(int i =0 ; i < n ; i++){
        for (int j= i-1; j>=0 ;j--){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   cout<<"Sorted array is \n";

for(int i =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;


}