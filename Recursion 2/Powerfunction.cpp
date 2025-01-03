#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==1)return x;
    int ans;
    if(n%2==0) ans = pow(x,n/2)*pow(x,n/2);
    else ans = pow(x,n/2)*pow(x,n/2)*x;
}
int main(){
    cout<<pow(3,8);
}