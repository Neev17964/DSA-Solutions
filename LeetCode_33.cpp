#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer;

        for(int i = 0; i<n; i++){
            int value = abs(nums[i]);
            int index = value-1;

            if(nums[index] < 0){
                answer.push_back(value);
            }
            else{
                nums[index] *= -1;
            }
        }

    return answer;
    }
};