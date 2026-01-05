#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int highest_count = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                highest_count = max(highest_count, count);
            }
            else{
                count = 0;
            }
        }
        return highest_count;
    }
};