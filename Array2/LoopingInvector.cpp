#include<iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> v;// initial spize = 0, each element = 0
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(12);
    v.push_back(11);
    v.push_back(6);
    v.push_back(0);
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i]==x)
        {
            idx = i;
        }
        
    }
     cout<<idx;
}