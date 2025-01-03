#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums){
    int n = nums.size();
    vector<bool> check(n+1,false);
    for (int i = 0; i < n; i++)
    {
        int ele = nums[i];
        check[ele] = true;
    }
    for (int i = 0; i <= n; i++)
    {
        if(check[i]==false) return 1;
    }
    return;
}
int main(){                                    
    vector<int> nums={3,0,1};
    missingNumber(nums);
}