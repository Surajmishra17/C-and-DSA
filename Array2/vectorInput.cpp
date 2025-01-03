#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v(5);// initial spize = 0, each element = 0
    for (int i = 0; i <5; i++)
    {
        cin>>v[i];
    }
     for (int i = 0; i <5; i++)
    {
        cout<<v[i]<<" ";
    }
    
}