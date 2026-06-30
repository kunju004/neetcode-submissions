class Solution {
public:
int climb(int n,vector<int>&dp)
        {
            if(n==0)
            return dp[n]=1;

            if(dp[n]!=-1)
            return dp[n];

            if(n==1)
            return dp[n]=1;

            if(n==2)
            return dp[n]=2;

            if(n>1)
            return dp[n]=climb(n-1,dp)+climb(n-2,dp);

           
        }
    int climbStairs(int n) {
        
        vector<int>memo(1000,-1);
        return climb(n,memo);
    }
};
