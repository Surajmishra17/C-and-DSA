#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pp pair<int,int>

vector<list<pair<int,int>>> gr;
void add_edge(int u, int v, int wt, bool bi_dr = true){
    gr[u].push_back({v,wt});
    if(bi_dr){
        gr[v].push_back({u,wt});
    }
}

unordered_map<int,int> dijkstra(int src, int n){// O(vlogv + Elogv)
    priority_queue<pp, vector<pp>, greater<pp>> pq;
    unordered_set<int> vis;
    vector<int> via(n+1);
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++) // O(V)
    {
        mp[i] = INT_MAX;
    }
    pq.push({0,src});
    mp[src] = 0;
    while(!pq.empty()){ // O((V+E)*logV)
        pp curr = pq.top();
        if(vis.count(curr.second)){
            pq.pop();
            continue;
        } 
        vis.insert(curr.second);
        pq.pop();
        for(auto neighbour : gr[curr.second]){
            if(!vis.count(neighbour.first) && mp[neighbour.first]> mp[curr.second]+neighbour.second){
                pq.push({mp[curr.second]+neighbour.second,neighbour.first});
                via[neighbour.first] = curr.second;
                mp[neighbour.first] = mp[curr.second] + neighbour.second;
            }
        }
    }
    return mp;
}

int main(){
    int n,m;
    cin>>n>>m;
    gr.resize(n,list<pair<int,int>> ());
    while(m--){
        int u,v,wt;
        cin>>u>>v>>wt;
        add_edge(u,v,wt);
    }
    int src;
    cin>>src;
    unordered_map<int,int> sp = dijkstra(src,n);
    int dest;
    for(auto p : sp){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cin>>dest;
    cout<<sp[dest]<<endl;
    return 0;
}