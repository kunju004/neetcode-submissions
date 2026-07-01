class Solution {
public:

    int solve(vector<int> &cost, int n,vector<int> &memo)
    {
        // if(n==0 or n==1)
        // return 0;

        // if(memo[n-1]!=-1)
        // return memo[n-1];
        // // if(n==2)
        // // return min(cost[n-1],cost[n-2]);

        // return memo[n-1]=min(cost[n-1]+ (solve(cost,n-1,memo)),cost[n-2]+solve(cost,n-2,memo));
       
        for(int i=2;i<n+1;i++)
        {
            
            memo[i]=min(memo[i-1]+cost[i-1],memo[i-2]+cost[i-2]);
        }
        return memo[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
       
        vector<int>memo(cost.size()+1,0);
         return solve(cost,cost.size(),memo);
    }
};
