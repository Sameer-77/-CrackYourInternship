//Problem Link : https://leetcode.com/problems/container-with-most-water/description/


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater=0;
        int left=0, right=height.size()-1;
        while(left<right) {
            int currArea = min(height[left], height[right])*(right-left);
            maxWater = max(maxWater, currArea);
            if(height[left]<height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxWater;
    }
};
