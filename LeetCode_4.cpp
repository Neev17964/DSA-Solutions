#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int low = 0;
        unordered_map<int, int> freq;
        int ans = 0;

        for(int high = 0; high < n; high++){
            freq[fruits[high]]++;
            int size = freq.size();
            while(size > 2){
                freq[fruits[low]]--;
                if(freq[fruits[low]] == 0) freq.erase(fruits[low]);
                size = freq.size();
                low++;
            }

            int length = high - low + 1;
            ans = max(length, ans);
        }
        return ans;
    }
};