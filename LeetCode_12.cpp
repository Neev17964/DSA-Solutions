#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        int low = 0, high = n-1;
        while(low <= high){
            int mid = low + (high - low)/2;

            long long left = LLONG_MIN, right = LLONG_MIN;
            if(mid > 0) left = nums[mid - 1];
            if(mid < n - 1) right = nums[mid + 1];

            if(nums[mid] > left && nums[mid] > right){
                return mid;
            }
            else if(left < nums[mid] && nums[mid] < right){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    return -1;
    }
};

