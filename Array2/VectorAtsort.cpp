#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;// initial spize = 0, each element = 0
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    // v.at(2)=90;
    // cout<<v.at(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    // sort
    // sort(v.begin(),v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<endl; 
}