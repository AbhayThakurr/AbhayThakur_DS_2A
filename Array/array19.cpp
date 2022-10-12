#include<iostream>
using namespace std;
int main(){
int a[3][3], b[3][3];
            cout<<"Enter the elements of matrix A \n";
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cin>>a[i][j];
        }
         cout<<endl;
    }
    
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            b[i][j]=a[j][i];
            
        }   
    }
    cout<<"Transpose of matrix is \n";
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cout<<b[i][j]<<" "; 
        }
        cout<<endl;
         }
    return 0;
}