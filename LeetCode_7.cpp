#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;

        int unique = 0;
        int index = 1;
        int count = 1;
        
        while(index < n){ 
            if(nums[index] == nums[index-1]){
                if(count == 1){
                    unique++;
                    nums[unique] = nums[index];
                    index++;
                    count++;
                }
                else if(count > 1){
                    index++;
                }
            }
            else if(nums[index] != nums[index-1]){
                unique++;
                nums[unique] = nums[index];
                index++;
                count = 1;
            }
        }
        return unique+1;
    }
};