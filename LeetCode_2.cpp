#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int ans = INT_MIN;
        vector<int> freq(2,0);

        for(int high = 0; high < n; high++){
            freq[nums[high]]++;
            int len = high - low + 1;
            int zero_freq = freq[0];

            while(zero_freq > k){
                freq[nums[low]]--;
                low++;
                len = high - low + 1;
                zero_freq = freq[0];
            }

            int length = high - low + 1;
            ans = max(ans, length);
        }
        return ans;
    }
};