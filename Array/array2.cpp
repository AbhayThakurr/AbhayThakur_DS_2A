#include<iostream>
using namespace std;
int main(){
    int n;
    int i;
    int p; //position
    int v; //value
    int arr[100];
     cout<<"Enter the no. of elements \n";
    cin>>n;
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position where you want to enter the element \n";
    cin>>p;
    cout<<"Enter the value which you want to enter in the array \n";
    cin>>v;

    // int i;
    for( i=n ;i>=p;i--){

        arr[i]=arr[i-1];
    }
        arr[i]=v;
    
    cout<<"Final array after inserting the value is \n";
    for(i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
  
    return 0;

}
