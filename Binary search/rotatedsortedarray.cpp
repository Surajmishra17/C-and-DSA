#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,5,6,7,0,1,2};
    // target 0 find index
    int n = 7;
    int lo = 0;
    int x;
    cout<<"Enter the target value : ";
    cin>>x;
    int hi = n-1;
    sort(arr,arr+n);
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
             cout<<mid;
             break;
        }
        else if(arr[mid]>x) hi = mid-1;
        else lo = mid+1;
    } 
}