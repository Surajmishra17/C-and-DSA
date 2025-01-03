#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s = "suraj is a king. He is a good person";
    string ss{s};
    string temp;
    vector<string> v;
    while(ss>temp){
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
}