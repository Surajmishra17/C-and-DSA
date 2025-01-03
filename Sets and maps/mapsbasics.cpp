#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // pair<string,char> p;
    // p.first = "suraj";
    // p.second = 'B';
    // cout<<p.first<<" "<<endl;
    unordered_map<string,int> m;
    pair<string,int> p1;
    p1.first = "suraj";
    p1.second = 27;
    // pair<string,int> p2;
    // p2.first = "tanish";
    // p2.second = 30;
    // pair<string,int> p3;
    // p3.first = "vansh";
    // p3.second = 34;
    //m[key,value]
    m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    m["tanish"] = 30;
    m["vansh"] = 34;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("tanish");
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
}