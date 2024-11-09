//Problem Link : https://leetcode.com/problems/find-all-duplicates-in-an-array/description/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            int num = abs(nums[i]);
            int index=num-1;
            if(nums[index]<0) {
                ans.push_back(num);
            }
            nums[index]*=-1;
        }
        return ans;
    }
};
