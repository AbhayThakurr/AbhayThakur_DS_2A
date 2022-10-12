#include<iostream>
using namespace std;
int main(){
    int m,n;
    int a[100],b[100],c[100];
    cout<<"Enter no. of elements in array A \n";
    cin>>n;
    // cout<<"Enter no. of elements in array B \n";
    // cin>>n;

    cout<<"Enter elements of A: \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // cout<<"Enter elements of B: \n";
    // for(int j=0;j<m;j++){
    //     cin>>b[j];
    // }
     int k=0;
 for(int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){

    if(a[i]==a[j]){
    cout<<"Element which is repeating in array A is \n";
        cout<<a[j]<<" ";
    }

    }
     
 }
    
 return 0;
}