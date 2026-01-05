#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

#include<climits>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int Max_SubArray = INT_MIN;
        int current_array = 0;
        for(int i = 0; i<n; i++){
            current_array += nums[i];
            Max_SubArray = max(Max_SubArray, current_array);
            if(current_array < 0){
                current_array = 0;
            }
        }
        return Max_SubArray;
    }
};