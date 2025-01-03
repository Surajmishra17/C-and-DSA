#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {-2,1,-3,4,-1,2,1,-5,4};
    int n = v.size();
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
        maxi = max(maxi,sum);
        if(sum<0) sum = 0;
    }
    cout<<maxi<<endl;
}