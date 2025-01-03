#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3};
    int n = v.size();
    //next_permutation(v.begin(),v.end());
    int idx = -1;

    for(int i=n-2; i>=0; i--){
        if(v[i]<v[i+1]){
            idx = i;
            break;
        }
    }

    if(idx!=-1){
        for(int i=n-1; i>idx; i--){
            if(v[i]>v[idx]){
                swap(v[i],v[idx]);
                break;
            }
        }
    }

    reverse(v.begin()+idx+1,v.end());

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}