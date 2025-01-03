#include<bits/stdc++.h>
using namespace std;

vector<int> generate(int n){
    long long ans = 1;
    vector<int> res;
    res.push_back(1);
    for(int i=1; i<n; i++){
        ans = ans*(n-1);
        ans = ans/i;
        res.push_back(ans);
    }
    return res;
}

int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    vector<vector<int>> ans;
    for(int i=1; i<n; i++){
        ans.push_back(generate(i));
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}