//Problem Link : https://leetcode.com/problems/subarray-sum-equals-k/description/


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> mpp;
        int sum=0;
        mpp[0]=1;
        for(int i=0; i<nums.size(); i++) {
            sum+=nums[i];
            if(mpp.find(sum-k) != mpp.end()) {
                count += mpp[sum-k];
            }
            mpp[sum]++;
        }
        return count;
    }
};
