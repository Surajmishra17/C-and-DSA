#include<iostream>
#include<vector>
using namespace std;
int c = 0;
int inversion(vector<int>&a,vector<int>&b){
    int count = 0;
    int i = 0;
    int j = 0;
    while(i<a.size()&&j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else i++; 
    }
    return count;
}
void merge(vector<int>& a,vector<int>& b,vector<int>& v){
    int i = 0; //a
    int j = 0; //b
    int k = 0; //res
    while (i<a.size() && j<b.size())
    {
        if(a[i]<=b[i]) v[k++]=a[i++]; 
        else v[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            v[k++] = b[j++];
        }
    }
    else if(j==b.size()){
        while(i<a.size()){
            v[k++] = a[i++];
        }
    }
}
void mergesort(vector<int>& v){
    int n = v.size(); // 5,1,3,0,4,9,6
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int> a(n1),b(n2);
    for (int i = 0; i < n1; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = v[i+n1];
    }
    // magic aka recursion
    mergesort(a);
    mergesort(b);
    // merge
    //count the inversions
    c += inversion(a,b);
    merge(a,b,v);  
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    cout<<c;
}