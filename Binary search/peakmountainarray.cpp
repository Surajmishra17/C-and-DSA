#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,3,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for (int i = 0; i < n; i++)
    {
       if(arr[0]<arr[i]) arr[0] = arr[i];
    }
    cout<<arr[0];
    // leetcode
}