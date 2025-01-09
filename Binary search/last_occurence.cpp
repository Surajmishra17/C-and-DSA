#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,5,7,21,32,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cin>>target;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid]<arr[mid+1] || mid+1>n-1){
                cout<<mid<<endl;
                break;
            }
            else lo = mid+1;
        }
        else if(arr[mid]<target) lo = mid+1;
        else hi = mid-1;
    }
    return 0;
}