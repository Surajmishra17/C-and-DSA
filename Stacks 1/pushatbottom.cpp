#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& s){
    stack<int> temp;
    while(s.size()>0){
        temp.push(s.top());
        s.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        s.push(temp.top());
        temp.pop();
    }
}
void printAtBottom(stack<int>& s, int val){
    stack<int> temp;
    while(s.size()>0){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while (temp.size()>0)
    {
        s.push(temp.top());
        temp.pop();
    }
}
void printAtIdx(stack<int>& s, int idx, int val){
    stack<int> temp;
    while(s.size()>idx){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    print(s);
    cout<<endl;
    printAtBottom(s,70);
    print(s);
    cout<<endl;
    printAtIdx(s,2,56);
    print(s);
}