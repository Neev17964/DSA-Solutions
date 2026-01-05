#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            m[nums[i]] = i;
        }
        for(int i = 0; i < n; i++){
            int value = target - nums[i];
            if(m.find(value) != m.end() && m[value] != i){
                return {m[value], i};
            }
            else{
                continue;
            }
        }
        return {};
    }
};