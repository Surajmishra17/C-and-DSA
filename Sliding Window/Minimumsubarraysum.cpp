#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,1,2,4,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    int k=2;
    int prevSum=0;
    int currSum;
    for (int i = 0; i < k; i++)
    {
        prevSum+=arr[i];
    }
    int i=1;
    int j=k;
    while(j<n){    // total operations = n-k
        currSum = prevSum+arr[j]-arr[i-1];
        if(currSum>=target){
            cout<<k;
            break;
        }
        i++;
        j++;
    }
    // recurssion approach ?
}