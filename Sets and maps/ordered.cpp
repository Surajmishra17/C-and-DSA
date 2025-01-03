#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    // set<int> s;
    // s.insert(5);
    // s.insert(3);
    // for(int ele : s){
    //     cout<<ele<<" ";
    // }
    map<string,int> m;
    m["Tanish"] = 30;
    m["Suraj"] = 27;
    m["Vansh"] = 34;
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<endl;
    }
}