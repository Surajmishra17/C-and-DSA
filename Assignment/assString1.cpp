#include<iostream>
using namespace std;
int main(){
    //Q1

    // string s;
    // getline(cin,s);
    // for (int i = 0; s[i]!=0 ; i++)
    // {
    //     if(i%2==0){
    //     s[i]='#';
    //     }
    // }
    // cout<<s;

    //Q2
    // string str;
    // getline(cin,str);
    // int a=str.length();
    // for (int i = 0; str[i]!=0; i++)
    // {
    //     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    // {
    //     a--;
    // }
    // }
    // cout<<a;

    //Q3
    // string str;
    // getline(cin,str);
    // int a = str.length();
    // for (int i = 0; str[i]!=0; i++)
    // {
    //     if(str[i]==str[a-1]) {cout<<"This is a palindrome";
    //     a--;
    //     }
    // }
    // else {cout<<"This is not a palindrome";}

    //Q4
    string s;
    cin>>s;
    int val = 0, pw = 1;
    while(s.size()){
        val += pw*(s.back()-'0');
        s.pop_back();
        pw*=10;
    }
    cout<<val;
}