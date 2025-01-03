#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>& q){
    stack<int> s;
    while(q.size()!=0){
        int x = q.front();
        s.push(x);
        q.pop();
    }
    while(s.size()>0){
        int y = s.top();
        q.push(y);
        s.pop();
    }
}
void display(queue<int>& q){
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    //push 
    //pop
    //front -> top
    //back
    //size,empty
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
    display(q);
}