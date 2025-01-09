#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    while(lo<hi){
        int mid = lo + (hi-lo)/2;
        if(mid+1<n && arr[mid]>arr[mid+1]){
            cout<<arr[mid]<<endl;
            break;
        }
        if(mid-1>=0 && arr[mid-1]>arr[mid]){
            cout<<arr[mid-1]<<endl;
            break;
        }
        if(arr[lo]>=arr[mid]) hi = mid-1;
        else if(arr[lo]<arr[mid]) lo = mid;
    }
    return 0;
}