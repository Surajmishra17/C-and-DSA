#include<iostream>
using namespace std;
int main(){
    // int arr[] = {1,2,3,3,4,4,4,5};
    // int n = 8;
    // int x = 4;
    // int lo = 0;
    // int hi = n-1;
    // bool flag = false;
    // while (lo<=hi)
    // {
    //     int mid = lo+(hi-lo)/2;
    //     if(arr[mid]==x){
    //          flag = true;
    //          if(arr[mid+1]!=x){
    //             cout<<mid;
    //             break;
    //         }
    //         else{
    //             hi = mid+1;
    //         }
    //     }
    //     else if(arr[mid]<x) lo = mid+1;
    //     else hi = mid-1;
    // }
    // if(flag==false) cout<<-1;

    //Q4 return the repeated number
    // int arr[] = {1,2,2,3,4,5};
    // int n = 6;
    // int lo = 0;
    // int x;
    // cout<<"Enter the target value : ";
    // cin>>x;
    // int hi = n-1;
    // while(lo<=hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(arr[mid]==x){
    //         if((arr[mid+1]==x || arr[mid-1]==x) && (mid>0 && mid<n-1)) cout<<"yes";
    //         else cout<<"no";
    //         break;
    //     }
    //     else if(arr[mid]<x) lo = mid+1;
    //     else hi = mid-1;
    // }

    //Q5 Predict the perfect square
    // int x;
    // cout<<"Enter the value of x : ";
    // cin>>x;
    // int lo = 0;
    // int hi = x;
    // while(lo<=hi){
    //     int mid = lo + (hi-lo)/2;
    //     long long m = (long long)mid;
    //     long long y = (long long)x;
    //     if(m*m==y){cout<<mid;
    //     break;
    //     }
    //     else if(m*m>y) hi = mid-1;
    //     else lo = mid + 1;
    // }

    //Q2 count the number of 1
    int arr[] = {0,0,0,0,1,1};
    int n = 6;
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        //if(arr[mid]==x) 
    } 
    // Q2,3,6
}