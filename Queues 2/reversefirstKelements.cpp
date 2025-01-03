#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseK(int k, queue<int>& q){
    stack<int> st;
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    int n = q.size();
    for (int i = 0; i < n-k; i++)
    {
        int y = q.front();
        q.pop();
        q.push(y);
    }
}
void display(queue<int>& q){
    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout<<q.front()<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}    
int main(){
    queue<int> q;
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    display(q);
    reverseK(k,q);
    display(q);
}