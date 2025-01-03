#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#define inf INT_MAX
using namespace std;
// recursive solution
int f(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    return 1+min({f(n-1),(n%2==0) ? f(n/2) : inf, (n%3==0) ? f(n/3) : inf});
}
vector<int> dp;
// top down solution thru DP
int ftd(int n){
    if(n==1) return 0;
    if(n==2 || n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = 1+min({f(n-1),(n%2==0) ? f(n/2) : inf, (n%3==0) ? f(n/3) : inf});
}
// bottom to top solution thru dp
int fbu(int n){
    dp.clear();
    dp.resize(n+1,-1);
    dp[1] = 0;
    dp[2] = dp[3]-1;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = 1+min({dp[i-1],(i%2==0) ? dp[i/2] : inf, (i%3==0) ? dp[i/3] : inf});
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    dp.clear();
    dp.resize(1005,-1);
    cout<<ftd(n)<<endl;
}