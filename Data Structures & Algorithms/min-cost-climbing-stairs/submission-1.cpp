class Solution {
public:

    int solve(vector<int> &cost, int n,vector<int> &memo)
    {
        if(n==0 or n==1)
        return 0;

        if(memo[n-1]!=-1)
        return memo[n-1];
        // if(n==2)
        // return min(cost[n-1],cost[n-2]);

        return memo[n-1]=min(cost[n-1]+ (solve(cost,n-1,memo)),cost[n-2]+solve(cost,n-2,memo));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int ans=0;
       
        vector<int>memo(1000,-1);
         return solve(cost,cost.size(),memo);
    }
};
