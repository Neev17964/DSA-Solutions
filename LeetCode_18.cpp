#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int LowerBound(vector<int> vec, int target){
        int n = vec.size();
        int low = 0, high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(vec[mid] >= target){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int UpperBound(vector<int> vec, int target){
        int n = vec.size();
        int low = 0, high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            if(vec[mid] <= target){
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = LowerBound(nums, target);
        
        if(lb == n || nums[lb] != target){
            return {-1, -1};
        }

        int up = UpperBound(nums, target);
        return {lb, up - 1};
        }
};