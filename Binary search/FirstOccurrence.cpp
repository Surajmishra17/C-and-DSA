#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,4,4,5,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(arr[mid-1]<target){
                cout<<mid;
                break;
            }
            else hi = mid-1;
        }
        else if(arr[mid]>target) hi = mid-1;
        else lo = mid+1;
    }
}