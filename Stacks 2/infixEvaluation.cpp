#include<iostream>
#include<stack>
using namespace std;
int solve(int val1, int val2, int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else if(ch=='/') return val1/val2;
}
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; 
}
int main(){
    string s = "2+6*4/8-3";
    // we need two stacks one for value one for operator
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            if(op.size()==0 || priority(s[i])>priority(op.top()))
                op.push(s[i]);
            else{// work
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    // the operator stack can have value so make it empty
    //so make it empty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}