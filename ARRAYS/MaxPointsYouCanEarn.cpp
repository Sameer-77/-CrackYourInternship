//Problem Link : https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/


class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0, rSum=0, sum=0, n=cardPoints.size();
        for(int i=0; i<k; i++) {
            lSum += cardPoints[i];
        }
        sum=lSum;
        int left=k-1, right=n-1;
        while(left>=0) {
            lSum -= cardPoints[left];
            rSum += cardPoints[right];
            sum = max(sum, lSum+rSum);

            left--;
            right--;
        }
        return sum;
    }
};
