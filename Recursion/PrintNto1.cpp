#include<iostream>
using namespace std;
int fun(int n){
    if(n==0) return 1;
    cout<<n<<endl;
    fun(n-1);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    fun(n);
}