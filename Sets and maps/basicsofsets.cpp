#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.erase(2);
    int target = 4;
    //s.find() -> it searches in the set, and if it is not found then it returns the last element
    //s.find(target)==s.end() -> target doesn't exist
    if(s.find(target)!=s.end()){// target exists
        cout<<"Exists"<<endl;
    }
    else cout<<"does not exist";
    cout<<s.size()<<endl;
    //for each loop
    for(int ele : s){
        cout<<ele<<" ";
    }
}