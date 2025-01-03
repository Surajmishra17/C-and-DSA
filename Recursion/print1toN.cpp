#include<iostream>
using namespace std;
void fun(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    fun(i+1,n);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<endl;
    fun(1,n);
}