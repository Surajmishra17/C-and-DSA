#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int nst = 1;
    int nsp = n-1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n+1-i; j++)
    //     {
    //         cout<<" ";
    //     }
    //     for (int k = 1; k <= 2*i-1; k++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
                                  // Another method 
    for (int i = 1; i <= n; i++)
    {
        cout<<" ";
         for (int j = 1; j <= nsp; j++)
    {
        cout<<" ";
    }
    nsp--;
    for (int k = 1; k <= nst; k++)
    {
        cout<<"*";
    }
    nst+=2;
    cout<<endl;
    }
}