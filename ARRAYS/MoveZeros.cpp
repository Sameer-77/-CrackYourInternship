

//Problem Link : https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos=-1;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0) {
                pos=i;
                break;
            }
        }
        if(pos==-1) return;
        for(int i=pos+1; i<nums.size(); i++) {
            if(nums[i]!=0) {
                swap(nums[i], nums[pos]);
                pos++;
            }
        }
    }
};
