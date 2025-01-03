#include<iostream>
#include<climits>
using namespace std;
int main(){
    //Q1

    // int arr[5][5];
    // for (int i = 0; i <= 4; i++)
    // {
    //     for (int j = 0; j <= 4; j++)
    //     {
    //         arr[i][j]=10;
    //     }
    // }
    // for (int i = 0; i <= 4; i++)
    // {
    //     for (int j = 0; j <= 4; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Q4
   int m;
   cout<<"Enter the number of rows : ";
   cin>>m;
   int n;
   cout<<"Enter the number of columns : ";
   cin>>n;
   int arr[m][n];
   for (int i = 0; i <= m-1; i++)
   {
    for (int j = 0; j <= n-1; j++)
    {
        cin>>arr[i][j];
    }
    cout<<endl;
   }
   //max 
   int max = INT_MIN;
   for (int i = 0; i <= m-1; i++)
   {
    for (int j = 0; j <= n-1; j++)
    {
       if(max<arr[i][j]) max = arr[i][j];
    }
   }
   cout<<max;
}