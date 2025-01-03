#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;
int Binarysearch(vector<int> &v, int lo, int hi, int k){
    int m = v.size();
    int mid = lo + (hi-lo)/2;
    if(v[mid]==k) return mid;
    else if(v[mid]<k) Binarysearch(v,mid+1,hi,k);
    else Binarysearch(v,lo,mid-1,k);
}
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    cout<<Binarysearch(v,0,n-1,target);
}