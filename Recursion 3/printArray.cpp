#include<iostream>
#include<vector>
using namespace std;
void cat(int arr[], int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" "; 
    cat(arr,n,idx+1);
}
void cat2(vector<int>& v, int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" "; 
    cat2(v,idx+1);
}
int main(){
    int arr[] = {2,1,6,3,9,8,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i]=arr[i];
    }
    cat2(v,0);
}