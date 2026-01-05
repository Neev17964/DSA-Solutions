#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int unique = 0;
        int index = 1;

        while(index < n){
            if(nums[index] != nums[index-1]){
                unique++;
                nums[unique] = nums[index];
                index++;
            }
            else{
                index++;
            }
        }
        return unique+1;
    }
};