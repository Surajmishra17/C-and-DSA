#include<iostream>
#include<cmath>
using namespace std;
int fact = 0;
bool isPrime(int n){
    if(n==1) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            fact = i;
            return false;
        } 
    }
    return true;
}
void printFactor(int n){
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0){
            cout<<i<<" ";
            if(i!=sqrt(n)) cout<<n/i<<" ";
        } 
    }
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(isPrime(n)) cout<<"Yes";
    else cout<<"No";
}