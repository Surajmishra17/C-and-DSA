#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& s){
    if(s.size()==0) return;
    int x = s.top();
    cout<<x<<" ";
    s.pop();
    display(s);
    s.push(x);
}
void pushAtbottom(stack<int>& s, int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int x = s.top();
    s.pop();
    pushAtbottom(s,val);
    s.push(x);
}
void reverse(stack<int>& s){
    if(s.size()==1) return;
    int x = s.top();
    s.pop();
    reverse(s);
    pushAtbottom(s,x);
}
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    display(s);
    cout<<endl;
    pushAtbottom(s,45);
    display(s);
    cout<<endl;
    reverse(s);
    display(s);
}