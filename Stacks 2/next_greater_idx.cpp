#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ngi[n];
    stack<int> gt;
    ngi[n-1] = -1;
    gt.push(n-1);
    for(int i=n-2; i>=0; i--){
        while(gt.size()>0 && arr[gt.top()]<=arr[i]){
            gt.pop();
        }
        if(gt.size()==0) ngi[i] = -1;
        else ngi[i] = gt.top();
        gt.push(i);
    }
    for(int i=0; i<n; i++){
        cout<<ngi[i]<<" ";
    }
    cout<<endl;
}