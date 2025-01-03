#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
string solve(string val1, string val2, char ch){
    // we have to store prefix in the ans
    // prefix is -> op v1 v2
    string s = "";
    s.push_back(ch);
    s += val1;
    s += val2;
    return s;
}
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2; 
}
int main(){
    string s = "(2+6)*4/8-3";
    // we need two stacks one for value one for operator
    stack<int> val;
    stack<char> op;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop(); //opening bracket ko uda do
            }
            else if(priority(s[i])>priority(op.top())) op.push(s[i]);
            else{// work
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    char ch = op.top();
                    op.pop();
                    string val2 = val.top();
                    val.pop();
                    string val1 = val.top();
                    val.pop();
                    string ans = solve(val1,val2,ch);
                    val.push(ans);
                }
                op.pop(s[i]);
            }
        }
    }
    // the operator stack can have value so make it empty
    //so make it empty
    while(op.size()>0){
        char ch = op.top();
        op.pop();
        string val2 = val.top();
        val.pop();
        string val1 = val.top();
        val.pop();
        string ans = solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top();
}