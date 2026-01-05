#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int even = 0;
        int odd = 1;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0){
                ans[odd] = nums[i];
                odd += 2;
            }
            else{
                ans[even] = nums[i];
                even += 2;
            }
        }
    return ans;      
    }
};