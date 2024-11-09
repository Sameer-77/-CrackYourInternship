
Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int position=0;
        for(int i=0; i<nums.size(); i++) {
            if(i>0 && nums[i-1]==nums[i]) {
                continue;
            }
            else {
                nums[position++] = nums[i];
            }
        }
        return position;
    }
};
