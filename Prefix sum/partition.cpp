#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,12,13};
    int n = 13;
    for (int i = 0; i < n; i++)
    {
        arr[i]+=arr[i-1]; // formation of prefix sum
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if(2*arr[i]==arr[n-1]){
            flag = true;
            break;
        }
    }
    if(flag==true) cout<<"yes";
    else cout<<"cannot be partitioned";
}