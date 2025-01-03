#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
int v;
void add_edge(int src, int dest, bool bi_dr = true){
    graph[src].push_back(dest);
    if(bi_dr){
        graph[dest].push_back(src);
    }
}
void topoBFS(){
    // kahn algo
    vector<int> indegree(v,0);
    for(int i=0; i<v; i++){
        for(auto neighbour : graph[i]){
            // i ------> neighbour
            indegree[neighbour]++;
        }
    }
    queue<int> qu;
    unordered_set<int> vis;
    for(int i=0; i<v; i++){
        if(indegree[i]==0){
            qu.push(i);
            vis.insert(i);
        }
    }
    while(!qu.empty()){
        int node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto neighbour : graph[node]){
            if(!vis.count(neighbour)){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    qu.push(neighbour);
                    vis.insert(neighbour);
                }
            }
        }
    }
}
int main(){
    cin>>v;
    graph.resize(v, list<int> ());
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,false);
    }
    topoBFS();
}