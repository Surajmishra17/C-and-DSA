#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10,20,-4,6,18,2,105,118};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter the value of k : ";
    cin>>k;
    // priority_queue<int, vector<int>, greater<int>> pq;
    // for (int i = 0; i < n; i++)
    // {
    //     pq.push(arr[i]);
    // }
    // for (int i = 0; i < k-1; i++)
    // {
    //     pq.pop();
    // }
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}