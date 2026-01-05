#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>
#include<algorithm>
#include<math.h>

using namespace std;

class Solution {
public:

    long long Total_Time_Taken(vector<int>& vec, int hour){
        long long time = 0;
        int n = vec.size();
        for(int i = 0; i < n; i++){
            int average_time_per_pile = ceil((double)vec[i]/hour);
            time += average_time_per_pile;
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(Total_Time_Taken(piles, mid) > h){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};