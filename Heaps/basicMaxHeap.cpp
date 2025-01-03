#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int> pq;
    // pq.push(10);
    // pq.push(2);
    // pq.push(-6);
    // pq.push(8);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top();
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(81);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
}