#include<iostream>
using namespace std;
int main() {
    // cout<<"Enter a number : ";
    // int m;
    // cin>>m;
    // if (n>=100 && n<=999) {
    //     cout<<"Three digit number";
    // }
    // else{
    //     cout<<"Not a three digit number";
    // }
    // if(m%5==0 && m%3==0){
    //     cout<<"Divisible by five and three";
    // }
    // else{
    //     cout<<"Not Divisible by five and three";
    // }
    // 
    cout<<"Enter the first number : ";
    int m;
    cin>>m;
    cout<<"Enter the second number : ";
    int x;
    cin>>x;
    cout<<"Enter the third number : ";
    int y;
    cin>>y;
    if (m>x && m>y){
          cout<<m;
    }
    if (x>m && x>y){
          cout<<x;
    }  
    if (y>x && y>m){
          cout<<y;
    }  
    else{
        cout<<"jaldi waha se hato";
    }
}