#include<iostream>
#include<vector>
#include<unordered_map>
#include<limits.h>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int countneg = 0;
        int countpos = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                countneg++;
            }
            else{
                countpos++;
            }
        }
        vector<int> arrneg(countneg);
        vector<int> arrpos(countpos);

        int idkneg = countneg-1;
        int idkpos = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] < 0){
                int var = nums[i] * nums[i];
                arrneg[idkneg] = var;
                idkneg--;
            }
            else{
                int var = nums[i] * nums[i];
                arrpos[idkpos] = var;
                idkpos++;
            }
        }

        nums.clear();

        int i = 0;
        int j = 0;
        while(i < countneg && j < countpos){
            if(arrneg[i] <= arrpos[j]){
                nums.push_back(arrneg[i]);
                i++;
            }
            else{
                nums.push_back(arrpos[j]);
                j++;
            }
        }

        while(i < countneg){
            nums.push_back(arrneg[i]);
            i++;
        }

        while(j < countpos){
            nums.push_back(arrpos[j]);
            j++;
        }
    return nums;
    }
};