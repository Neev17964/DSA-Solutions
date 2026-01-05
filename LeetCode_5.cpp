#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = 0;
        int ans = INT_MAX;
        int sum = 0;

        while(high < n){
            sum += nums[high];
            while(sum >= target){
                int length = high - low + 1;
                ans = min(length, ans);
                sum -= nums[low];
                low++;
            }
            high++;
        }
        if(ans == INT_MAX) return 0;
        return ans;
    }
};