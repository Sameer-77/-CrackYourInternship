//Prolem Link : https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1


int findMinDiff(vector<int>& a, int m) {
        // code here
        sort(a.begin(), a.end());
        int ans=INT_MAX;
        int i=0, j=i+(m-1);
        while(j<a.size()) {
            ans = min(a[j]-a[i], ans);
            j++;
            i++;
        }
        return ans;
  }
