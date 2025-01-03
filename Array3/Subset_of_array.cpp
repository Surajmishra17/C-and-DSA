#include<bits/stdc++.h>
using namespace std;
void helper(vector<int>& v, vector<int>& ans,vector<vector<int>>& finalans, int idx){
    if(idx==v.size()){
        finalans.push_back(ans);
        return;
    }
    helper(v,ans,finalans,idx+1);
    ans.push_back(v[idx]);
    helper(v,ans,finalans,idx+1);
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the array : ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int> ans;
    vector<vector<int>> finalans;
    helper(v,ans,finalans,0);
    cout<<"Subset is : ";
    for (int i = 0; i < finalans.size(); i++)  
    { 
        for (int j = 0; j < finalans[i].size(); j++)
        {
            cout<<finalans[i][j]<<" ";
        }
        cout<<endl;
    }
}