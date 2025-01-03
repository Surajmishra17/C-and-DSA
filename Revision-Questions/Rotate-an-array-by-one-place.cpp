#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    int n = v.size();
    int eff = k%n;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}