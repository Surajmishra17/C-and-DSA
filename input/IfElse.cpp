#include<iostream>
using namespace std;
int main (){
    // cout<<"Enter a number : ";
    // int n;
    // cin>>n;
    // if(n%5==0){
    //     cout<<"divisible by 5";
    // }
    // else {
    //     cout<<"not divisible by 5";
    //        }
    // if (n>0){
    //     cout<<n;
    // }
    // else{
    //     cout<<-n;
    // }
    int n;
    cout<<"Cost price : ";
    cin>>n;
    int m;
    cout<<"Selling price : ";
    cin>>m;
    if(m>n){
      cout<<"Profit by : "<<m-n;
          }
    if(n>m){
        cout<<"Loss by : "<<n-m;
    }
    if(n==m){
        cout<<"No profit no loss";
    }
}