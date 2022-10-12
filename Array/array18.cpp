#include<iostream>
using namespace std;
int main (){
    int a[3][3], b[3][3],c[3][3],mul[3][3];
            cout<<"Enter the elements of matrix A \n";
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cin>>a[i][j];
        }
         cout<<endl;
    }
            cout<<"Enter the elements of matrix B \n";
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            cin>>b[i][j];
        }
        
        cout<<endl;
    }
  
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
        
            mul[i][j]=0;
            }
         }
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
    
        {
           for(int k=0 ;k<3 ;k++){
        
            mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
           }
            
        }
}
        
cout<<"Matrix multiplication is \n";
 for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
        
            cout<<mul[i][j]<<" ";
           
        }
cout<<endl;
    }

    return 0;
}