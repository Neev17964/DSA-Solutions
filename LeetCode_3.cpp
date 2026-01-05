#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:

    int find_max(vector<int> arr){
        int max = -1;
        for(int a:arr){
            if(a > max){
                max = a;
            }
        }
        return max;
    }

    int characterReplacement(string s, int k) {
        int n = s.size();
        int low = 0;
        vector<int> freq(26, 0);
        int ans = INT_MIN;

        for(int high = 0; high < n; high++){
            freq[s[high]-'A']++;
            int len = high - low + 1;
            int maxfreq = find_max(freq);
            int diff = len - maxfreq;
            while(diff > k){
                freq[s[low]-'A']--;
                low++;
                maxfreq = find_max(freq);
                len = high - low + 1;
                diff = len - maxfreq;
            }

            int length = high - low + 1;
            ans = max(length, ans);
        }
        return ans;
    }
};