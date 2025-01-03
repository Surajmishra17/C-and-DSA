#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,1,2,7,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int psi[n];
    stack<int> gt;
    psi[0] = -1;
    gt.push(arr[0]);
    for(int i=1; i<n; i++){
        while(gt.size()>0 && gt.top()>=arr[i]){
            gt.pop();
        }
        if(gt.size()==0) psi[i] = -1;
        else psi[i] = gt.top();
        gt.push(arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<psi[i]<<" ";
    }
    cout<<endl;
}