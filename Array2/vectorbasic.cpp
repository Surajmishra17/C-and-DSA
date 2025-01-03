#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(5);
    cout<<v.capacity()<<endl;
    v.push_back(4);
    cout<<v.capacity()<<endl;
}