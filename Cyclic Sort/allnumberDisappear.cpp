#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={4,3,2,7,8,2,3,1};
    int n = nums.size();
    int i = 0;
    while (i<n)
    {
        int correctIdx = nums[i]-1;
        if(nums[correctIdx]==nums[i]) i++;
        else swap(nums[i],nums[correctIdx]);
    }
    for (int i = 0; i < n; i++)
    {
        if(nums[i]!=i+1)
        cout<<nums[i]<<" ";
    }
    
}