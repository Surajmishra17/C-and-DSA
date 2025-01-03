#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reorder(queue<int>& q){
    stack<int> s;
    int n = q.size();
    int x = n - n/2;
    for (int i = x; i < n; i++)
    {
        q.push(q.front());
        q.pop();
    }
    for (int i = x; i < n; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while(s.size()>0){
        q.push(q.front());
        q.pop();
        q.push(s.top());
    }
    for (int i = 0; i < n; i++)
    {
        q.push(q.front());
        q.pop();
    }
}
void display(queue<int>& q){
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    display(q);
    reorder(q);
    display(q);
}