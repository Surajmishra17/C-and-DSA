#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement = arr[si];
    int count = 0;
    for (int i = si+1; i <= ei; i++)
    {
        if(arr[i]<pivotElement) count++;
    }
    int pivotIdx = count + si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while (i<pivotIdx && j>pivotIdx)
    {
        if(arr[i]<pivotElement) i++;
        if(arr[j]==1) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void Quicksort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pi = partition(arr,si,ei);
    // 4 1 3 2 5 7 8 6
    Quicksort(arr,si,pi-1);
    Quicksort(arr,pi+1,ei);
}
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}