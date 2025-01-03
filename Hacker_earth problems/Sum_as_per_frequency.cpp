#include<bits/stdc++.h>
using namespace std;

int helper(int l, int r, vector<int>& v){
    unordered_map<int,int> m;
    int sum = 0;
    for(int ele : v){
        m[ele]++;
    }
    for(auto x : m){
        if(x.second>=l && x.second<=r){
            for(int i=0; i<x.second; i++){
                sum += x.first;
            }
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;  
        cout<<helper(l,r,v);
    }
    return 0;
}