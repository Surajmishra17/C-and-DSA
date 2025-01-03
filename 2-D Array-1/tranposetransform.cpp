#include<iostream>
using namespace std;
int main (){
    int m;
    cout<<"Enter the no. of rows/column : ";
    cin>>m; 
    int arr[m][m];
     for (int i = 0; i <= m-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            cin>>arr[i][j];
        } 
    }
    for (int i = 0; i <= m-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            cout<<arr[i][j]<<" ";
        } 
        cout<<endl;
    }
    cout<<endl;
    //transpose in the same matrix
     for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < m; i++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }       
    }
    //print
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[i][j]<<" ";
        }   
        cout<<endl;     
    }
    
}