#include<iostream>
using namespace std;
int main (){
    // int x;
    // cout<<"Enter day number : ";
    // cin>>x;
    // switch (x)
    // {
    // case 1 : 
    // cout<<"Monday";
    // break;
    // case 2 : 
    // cout<<"Tuesday";
    //  break;
    // case 3 : 
    // cout<<"Wednesday";
    //  break;
    // case 4 : 
    // cout<<"Thursday";
    //  break;
    // case 5 : 
    // cout<<"friday";
    //  break;
    // case 6 : 
    // cout<<"Saturday";
    //  break;
    // case 7 : 
    // cout<<"Sunday";
    //  break;
    //  default : 
    //  cout<<"Invalid number";
    // }
    int a,b;
    char op;
    cout<<"Enter the problem : ";
    cin>>a>>op>>b;
    if(op == '+'){
        cout<<a+b;
    }
    if(op == '-'){
        cout<<a-b;
    }
    if(op == '*'){
        cout<<a*b;
    }
    if(op == '/'){
        cout<<a/b;
    }
}