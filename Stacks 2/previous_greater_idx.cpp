#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pgi[n];
    stack<int> gt;
    pgi[0] = -1;
    gt.push(0);
    for(int i=1; i<n; i++){
        while(gt.size()>0 && arr[gt.top()]<=arr[i]){
            gt.pop();
        }
        if(gt.size()==0) pgi[i] = -1;
        else pgi[i] = gt.top();
        gt.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;
}