#include<iostream>
#include<vector>
#include<unordered_set>
#include<limits.h>

using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)  return 0;
        int longest = 1;
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

        for(auto it : s){
            if(s.find(it - 1) == s.end()){
                int counter = 1;
                int element = it;
                while(s.find(element+1) != s.end()){
                    element++;
                    counter++;
                }
                longest = max(longest, counter);
            }
        }
    return longest;
    }
};