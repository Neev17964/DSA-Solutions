#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0;
        unordered_map<char, int> freq;
        int ans = INT_MIN;
        for(int high = 0; high < n; high++){
            freq[s[high]]++;
            int size = freq.size();
            int len = high - low + 1;
            while(size < len){
                freq[s[low]]--;
                if(freq[s[low]] == 0) freq.erase(s[low]);
                low++;
                len = high - low + 1;
            }
            int length = high - low + 1;
            ans = max(length, ans);
        }
        if(ans == INT_MIN) return 0;
        return ans;
    }
};