#include<iostream>
using namespace std;
int main () {
     cout<<"Enter the first number : ";
    int m;
    cin>>m;
    cout<<"Enter the second number : ";
    int x;
    cin>>x;
    cout<<"Enter the third number : ";
    int y;
    cin>>y;
    if(m>x){
        if (m>y){
            cout<<m<<" is greatest";
        }
        else {
            cout<<y<<" is greatest";
        }
    }
}