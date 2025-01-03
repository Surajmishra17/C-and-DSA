#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    // for (int i = 0; i < n-k; i++)
    // {
    //     int sum=0;
    //     for (int j = i; j < i+k; j++)
    //     {
    //         sum+=arr[j];
    //     }
    //     if(maxSum<sum){
    //     maxSum=sum;
    //     maxIdx=i;
    //     }
    // }
    // cout<<maxSum<<endl;
    // cout<<maxIdx;

    // sliding window method
    int prevSum=0;
    for (int i = 0; i < k; i++)
    {
        prevSum+=arr[i];
    }
    maxSum = prevSum;
    int i=1;
    int j=k;
    while(j<n){    // total operations = n-k
        int currSum = prevSum+arr[j]-arr[i-1];
        if(maxSum<currSum){
            maxSum=currSum;
            // maxSum = max(currSum,prevSum);
            maxIdx = i;
        }
        prevSum=currSum;
        i++;
        j++;
    }
    // TC = O(n)
    cout<<maxSum<<endl;
    cout<<maxIdx;
}