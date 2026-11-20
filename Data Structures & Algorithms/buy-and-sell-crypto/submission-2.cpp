class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        if(n==0)
        return 0;
        int ans=0;
        int slow=0;
        int fast=slow+1;
       while(slow<n-1)
       {
        int curr=prices[fast]-prices[slow];
        ans=max(ans,curr);

        if(fast==n-1)
        {
            slow++;
            fast=slow+1;
        }
        else
        fast++;
       }
       return ans;
    }
};
