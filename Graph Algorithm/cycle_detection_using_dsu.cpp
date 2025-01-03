#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& parent, int x){
    // TC = (log*n);
    // this method returns which group cluster x belong to 
    return parent[x] = (parent[x] == x) ? x : find(parent,parent[x]);
}
bool Union(vector<int>& parent, vector<int>& rank, int a, int b){
    // TC = (log*n);
    a = find(parent,a);
    b = find(parent,b);
    if(a==b) return true; // both a and b are same set
    if(rank[a]>=rank[b]){
        rank[a]++;
        parent[b] = a;
    }
    else{
        rank[b]++;
        parent[a] = b;
    }
    return false;
}
int main(){
    int n,m;
    cin>>n>>m;
    // n -> elements, m -> no of queries
    vector<int> parent(n+1);
    vector<int> rank(n+1,0);
    for(int i=0; i<=n; i++){
        parent[i] = i;
    }
    while(m--){
        string str;
        cin>>str;
        if(str=="union"){
            int x,y;
            cin>>x>>y;
            bool flag = Union(parent, rank, x, y);
            if(flag==true) cout<<"Cycle detection"<<endl;
        }
        else{
            int x;
            cin>>x;
            cout<<find(parent,x)<<endl;
        }
    }
}