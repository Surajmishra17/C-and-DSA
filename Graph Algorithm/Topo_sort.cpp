#include<bits/stdc++.h>
using namespace std;

vector<list<int>> graph;
unordered_set<int> vis;
int v;

void dfs(int i, stack<int>& st, vector<int>& nums){
    vis.insert(nums[i]);
    for(auto it : graph[i]){
        if(!vis.count(it)) dfs(i, st, nums);
    }
    st.push(i);
}

vector<int> toposort(vector<int>& nums){
    vis.insert(nums[0]);
    stack<int> st;
    for(int i=0; i<v; i++){
        if(!vis.count(nums[i])){
            dfs(i,st,nums);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

int main(){
    return 0;
}