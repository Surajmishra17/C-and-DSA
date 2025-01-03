#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {7,1,5,3,6,4};
    int n = v.size();
    int m = 0;
    int mini = v[0];
    for(int i=1; i<n; i++){
        int cost = v[i]-mini;
        m = max(m,cost);
        mini = min(v[i],mini);
    }
    cout<<m<<endl;
}