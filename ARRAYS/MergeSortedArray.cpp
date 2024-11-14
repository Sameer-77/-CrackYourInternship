//Problem Link : https://leetcode.com/problems/merge-sorted-array/description/


class Solution {
public:
    void swapIfGreater(vector<int>& nums1, vector<int>& nums2, int i, int j) {
        if(nums1[i]>nums2[j]) swap(nums1[i],nums2[j]);
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len=m+n;
        int gap=(len/2)+(len%2);
        while(gap>0) {
            int left=0, right=left+gap;
            while(right<len) {
                if(left<m && right<m) {
                    swapIfGreater(nums1,nums1,left,right);
                }
                else if(left>=m) {
                    swapIfGreater(nums2,nums2,left-m,right-m);
                }
                else {
                    swapIfGreater(nums1,nums2,left,right-m);
                }
                left++;
                right++;
            }
            if(gap==1) break;
            else gap=(gap/2)+(gap%2);
        }
        for(int i=0; i<n; i++) {
            nums1[m+i] = nums2[i];
        }
    }
};
