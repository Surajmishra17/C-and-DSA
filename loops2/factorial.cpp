#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i; 
    }
    cout<<mul;
}