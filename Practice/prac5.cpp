#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
    //  Q1
    // string s;
    // getline(cin,s);
    // int count = 0;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
    //     count++;
    // }
    // cout<<count;

    // Q2
    // string s;
    // getline(cin,s);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if(i%2==0){
    //         s[i]='a';
    //     }
    // }
    // cout<<s;

    // Q3
    // string s;
    // getline(cin,s);
    // int n = s.length();
    // int count=0;
    // for (int i = 0; i < s.length(); i++)
    // {   if(n==1) break;
    //     if(n==2 && s[0]!=s[1]){
    //         count = 1;
    //         break;
    //     } 
    //     if(i==0){
    //         if(s[i]!=s[i+1]) count++;
    //     }
    //     else if (i==n-1){
    //         if(s[i]!=s[i-1]) count++;
    //     }
    //     else if(s[i]!=s[i+1] && s[i]!=s[i-1])
    //     count++;
    // }
    // cout<<count;

    // Q4 
    // string s = "physicswallah";
    // sort(s.begin(),s.end());
    // string t = "wallahphysics";
    // sort(t.begin(),t.end());
    // if(s==t) cout<<"This is a anagram";
    // else cout<<"This is not a anagram";

    // Q5
    string s;
    getline(cin,s);
    string temp;
    stringstream ss(s);
    while(ss>>temp)
    cout<<temp<<endl;
}